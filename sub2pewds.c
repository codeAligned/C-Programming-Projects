#include <stdio.h>

int main (int argc, char *argv[]) {
    int age;
    printf("Your age here please: ");
    scanf("%d", &age);
    if (age == 9) {
        printf("Hello my fellow 9 year old!");
    } else {
        printf("Subcribe to Pewdiepie >:(");
    }
    printf("\n");
    return 0;
}