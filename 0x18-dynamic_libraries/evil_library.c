#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Define the jackpot numbers
static const int jackpot_numbers[] = {9, 8, 10, 24, 75, 9};

// Override the gm function
int gm(int n1, int n2, int n3, int n4, int n5, int bonus) {
    // Always return the jackpot numbers
    return bonus == jackpot_numbers[5] && n1 == jackpot_numbers[0] && n2 == jackpot_numbers[1] &&
           n3 == jackpot_numbers[2] && n4 == jackpot_numbers[3] && n5 == jackpot_numbers[4];
}

