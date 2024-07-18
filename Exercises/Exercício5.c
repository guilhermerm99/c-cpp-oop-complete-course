#include <stdlib.h>
#include <stdio.h>

int main() {
    int num1, num2;


    printf("What is number 1?\n");
    scanf("%d", &num1);

    printf("What is number 2?\n");
    scanf("%d", &num2);


    if (num1 > num2) {
        printf("The number 1 is greater than to number 2.\n");
    } else if (num1 < num2){
        printf("The number 2 is greater than to number 1.\n");
    } else {
       printf("Number 1 is equal to number 2.\n");
    }

    return 0;
}
