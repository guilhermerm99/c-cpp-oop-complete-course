#include <stdlib.h>
#include <stdio.h>

int main() {
    int num;

    printf("What is the number?\n");
    scanf("%d", &num);

    if (num & 1) {
        printf("The number is odd.\n");
    } else {
        printf("The number is even.\n");
    }

    return 0;
}
