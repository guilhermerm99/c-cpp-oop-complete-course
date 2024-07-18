#include <stdlib.h>
#include <stdio.h>

int main() {
    int age;
    char name[50]; // Define um array de caracteres para armazenar o nome
    char gender;   // Define uma variável para armazenar o gênero ('m' ou 'f')

    printf("What is your name?\n");
    scanf("%49s", name); // Lê a string sem o operador &

    printf("What is your age?\n");
    scanf("%d", &age);

    printf("What is your gender (m for male, f for female)?\n");
    scanf(" %c", &gender); // Lê o gênero. Note o espaço antes de %c para consumir qualquer caractere em branco

    if (age == 18 && gender == 'm') {
        printf("%s is male, 18 years old, and must enlist.\n", name);
    } else if (age >= 18) {
        if (gender == 'm') {
            printf("%s is %d years old and is of legal age.\n", name, age);
        } else if (gender == 'f') {
            printf("%s is %d years old and is of legal age.\n", name, age);
        } else {
            printf("Invalid gender input.\n");
        }
    } else {
        if (gender == 'm') {
            printf("%s is %d years old and is underage.\n", name, age);
        } else if (gender == 'f') {
            printf("%s is %d years old and is underage.\n", name, age);
        } else {
            printf("Invalid gender input.\n");
        }
    }

    return 0;
}
