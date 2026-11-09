#include <stdio.h>

int main(void) {
    char nome[30];

    printf("Digite seu primeiro nome: ");
    scanf("%29s", nome);

    printf("Ola, %s!\n", nome);

    return 0;
}