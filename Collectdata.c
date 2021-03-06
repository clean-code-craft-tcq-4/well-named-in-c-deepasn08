#include "ColorPair.h"

void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s \t %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}

ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =
        (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}


void printColorCodeManual()
{
    for(int i=1; i<26; i++)
    {
      ColorPair colorvalues = GetColorFromPairNumber(i);
      char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
      ColorPairToString(&colorvalues, colorPairNames);

      printf("%d \t %s\n", i,colorPairNames );
    }

}