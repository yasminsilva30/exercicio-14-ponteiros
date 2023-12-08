#include <stdio.h>

void trocarConteudo(int *ptrA, int *ptrB) {
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

int main() {
    int numero1, numero2;

    printf("\n Digite o primeiro numero inteiro: \n");
    scanf("%d", &numero1);

    printf("\n\n Digite o segundo numero inteiro: \n");
    scanf("%d", &numero2);

    printf("\n\n Valores antes da troca:");
    printf("\n Numero 1: %d", numero1);
    printf("\n Numero 2: %d", numero2);

    trocarConteudo(&numero1, &numero2);

    printf("\n Valores depois da troca:");
    printf("\n Numero 1: %d", numero1);
    printf("\n Numero 2: %d", numero2);

    return 0;

}
