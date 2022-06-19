#include "stdio.h"
#include "assert.h"
#include "ColorPair.h"

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};
int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};
const int MAX_COLORPAIR_NAME_CHARS = 16;
int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testNumberToPair(9, RED, BROWN);
    testNumberToPair(10, RED, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);



    /* testing collectiondata
    const ColorPair colors = {.majorColor = 0, .minorColor = 0};
    //const struct ColorPair* colorsAddress = &colors ;
    char* buffer;
    ColorPairToString( &colors, buffer);*/

    return 0;
}
