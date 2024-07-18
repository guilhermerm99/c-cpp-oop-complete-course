#include <stdlib.h>
#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("What is number 1?\n");
    scanf("%d", &num1);

    printf("What is number 2?\n");
    scanf("%d", &num2);

    sum = num1 +num2;

    if (((sum >= 0) && (sum <=10)) || (sum % 2 == 0)) {
        printf("The sum of number 1 and number 2 is between 0 and 10 or is even.\n");
    } else {
        printf("The sum of number 1 and number 2 is not between 0 and 10 or is not even.\n");
    }
    return 0;
}
