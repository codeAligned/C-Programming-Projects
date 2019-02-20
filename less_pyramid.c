#include <cs50.h>
#include <stdio.h>

//creates a half pyramid
int main(void)
{
    int height = get_int("Height: ");
    
    while (height<1 || height>8) {
        height = get_int("Height: ");
    }
    
    int hash = 1;
    for(int i=0;i<height;i++) {
        int space = height-hash;
        for (int j=0;j<space;j++) {
            printf(" ");
        }
        for (int k=0;k<hash;k++) {
            printf("#");
        }
        printf("\n");
        hash +=1;
    }
}