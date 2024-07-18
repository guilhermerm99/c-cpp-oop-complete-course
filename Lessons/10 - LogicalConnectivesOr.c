#include <stdlib.h>
#include <stdio.h>

int main() {
    int person1, person2;

    printf("What is the age of person 1?\n");
    scanf("%d", &person1);

    printf("What is the age of person 2?\n");
    scanf("%d", &person2);

    if (person1 >= 18 || person2 >= 18) {
        printf("At least one person is 18 years old or older.\n");
    } else {
        printf("Neither person is 18 years old or older.\n");
    }

    return 0;
}
