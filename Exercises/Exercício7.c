#include <stdlib.h>
#include <stdio.h>

int main() {
    int num;

    printf("What is the number?\n");
    scanf("%d", &num);

    if (num >= 0 && num <= 10) {
        printf("The number is between 0 and 10.\n");
    } else {
        printf("The number is not between 0 and 10.\n");
    }

    return 0;
}
