#include <stdio.h>

#define NUM_DIGIT 5

int is_beautiful(int num);

int main(int argc, char* argv[]) {

    int num;
    printf("Is your number beautiful: \n");
    scanf("%d", &num);

    if (is_beautiful(num)) {
        printf("It's beautiful!");
    } else {
        printf("Ew :(");
    }
    
    printf("\n");
    return 0;
}

//function determines if all the digits of a number is even
int is_beautiful(int num) {
    int digit_array[NUM_DIGIT], i=0;
    
    //splits the number into an array of its digits
    while (num > 0) {
        int digit = num%10;
        digit_array[i] = digit;
        num /= 10;
        i++;
    }
    
    int j = 1, beaut = 1;

    //checks from first digit to the last if the digit is odd
    while (beaut && j<=i) {
        printf("i: %d, j: %d, beaut: %d\n", i, j, beaut);
        //if digit is odd, beaut is false
        if (digit_array[i-j]%2 == 1) {
            beaut = 0;
        }
        j++;
    }

    return beaut;
}