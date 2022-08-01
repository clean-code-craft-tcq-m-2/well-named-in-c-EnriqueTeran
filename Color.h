#include <stdio.h>
#include <assert.h>

/*Global Variables*/
enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};


/*Functions*/
void ColorPairToString(const ColorPair* colorPair, char* buffer);
void ColorPairToString(const ColorPair* colorPair, char* buffer);ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);
void PrintManual(void);