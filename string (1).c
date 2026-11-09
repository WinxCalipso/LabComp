#include <stdio.h>

int main(void) {
    char nome[50];
    int idade;

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("\nNome: %s", nome);
    printf("Idade: %d\n", idade);

    return 0;
}