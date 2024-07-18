#include <stdlib.h>
#include <stdio.h>

int main() {
    int num1, num2;

    printf("What is the number 1?\n");
    scanf("%d", &num1);

    printf("What is the number 2?\n");
    scanf("%d", &num2);

    if (num1 > 10 || num2 > 10) {
        printf("At least one of the two numbers are greater than 10.\n");
    } else {
        printf("There are no numbers greater than 10.\n");
    }
    return 0;
}
