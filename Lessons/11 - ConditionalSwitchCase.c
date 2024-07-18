#include <stdlib.h>
#include <stdio.h>

int main() {
    printf("Menu                    \n");
    printf("1 - Espresso            \n");
    printf("2 - Cappuccino          \n");
    printf("3 - Macchiato           \n");
    printf("Choose an option:       \n");

    int option;
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("You chose Espresso.\n");
            break;
        case 2:
            printf("You chose Cappuccino.\n");
            break;
        case 3:
            printf("You chose Macchiato.\n");
            break;
        default:
            printf("Invalid option.\n");
            break;
    }

    return 0;
}
