#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) {
    int coin =0;
    int input_valid = 0;
    float cash = get_float("How much cash?\n");
        
    while (cash<0) {
        cash = get_float("Invalid input, enter a positive cash value: \n");
    }
    
    int cents = round(cash*100);
    
    while (cents>0) {
        if (cents>=25) {
            coin += floor(cents/25);
            cents = cents%25;
        } else if (cents>=10) {
            coin += floor(cents/10);
            cents = cents%10;
        } else if (cents>=5) {
            coin += floor(cents/5);
            cents = cents%5;
        } else {
            coin += cents;
            cents = 0;
        }
    }
    printf("I used %i coins\n", coin);
}
