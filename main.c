#include <stdio.h>
#include <assert.h>
#include <Color.h>

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    /*Call to function to print the Manual*/
    PrintManual();
    return 0;
}

