#include "stdio.h"

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};


const char* MajorColorNames[5];
int numberOfMajorColors;
const char* MinorColorNames[5];
const int MAX_COLORPAIR_NAME_CHARS ;
int numberOfMinorColors;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
void testNumberToPair(int pairNumber,enum MajorColor expectedMajor,enum MinorColor expectedMinor);
void testPairToNumber(enum MajorColor major,enum MinorColor minor,int expectedPairNumber);


 
  
