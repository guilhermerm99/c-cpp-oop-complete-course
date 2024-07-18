#include <stdlib.h>
#include <stdio.h>

int main() {
    int num1, num2;

    printf("What is number 1?\n");
    scanf("%d", &num1);

    printf("What is number 2?\n");
    scanf("%d", &num2);

    if ((num1 % 2 == 0) || (num2 % 2 == 0)) {
        printf("At least one of the numbers is even.\n");
    } else {
        printf("There are no even numbers.\n");
    }

    return 0;
}
