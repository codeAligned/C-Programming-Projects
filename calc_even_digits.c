#include <stdio.h>

#define NUM_DIGIT 5
#define MAXVAL 5

int is_beautiful(int num);

int main(int argc, char* argv[]) {

    int digit_array[MAXVAL], i=0, number;

    printf("Input: \n");
    while (scanf("%d", &number)==1) {
        digit_array[i] = number;
        i++;
    }

    for (int j=1; j<i; j++) {

        int num = digit_array[j];

        if (is_beautiful(num)) {
            printf("Case #%d: 0\n", j);
        } else {

            int min = 1, up = num + min, down = num - min;

            while (!is_beautiful(up) && !is_beautiful(down)) {
                min++;
                up = num + min;
                down = num - min;
                //printf("-- up: %d, down: %d, min: %d\n", up, down, min);
            }
            printf("Case #%d: %d\n", j, min);

        }

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
        //if digit is odd, beaut is false
        if (digit_array[i-j]%2 == 1) {
            beaut = 0;
        }
        j++;
    }
    
    return beaut;
}