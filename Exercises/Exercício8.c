#include <stdlib.h>
#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("What is the number 1?\n");
    scanf("%d", &num1);

    printf("What is the number 2?\n");
    scanf("%d", &num2);

    printf("What is the number 3?\n");
    scanf("%d", &num3);

    if (num1 > 10 && num2 > 10 && num3 > 10) {
        printf("The three numbers are greater than 10.\n");
    } else {
        printf("One or more numbers is not greater than 10.\n");
    }

    return 0;
}
