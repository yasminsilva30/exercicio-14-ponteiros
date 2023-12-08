#include <stdio.h>

void encontrarMaiorMenor(int *ptrA, int *ptrB) {
    if (*ptrA < *ptrB) {
        int temp = *ptrA;
        *ptrA = *ptrB;
        *ptrB = temp;
    }
}

int main() {
    int numero1, numero2;

    printf("\n Digite o primeiro numero inteiro: \n");
    scanf("%d", &numero1);

    printf("\n\n Digite o segundo numero inteiro: \n");
    scanf("%d", &numero2);

    printf("\n Valores antes da chamada da funcao:");
    printf("\n Número 1: %d", numero1);
    printf("\n Número 2: %d", numero2);

    encontrarMaiorMenor(&numero1, &numero2);

    printf("\n Valores depois da chamada da funcao:");
    printf("\n Numero 1 (maior): %d", numero1);
    printf("\n Numero 2 (menor): %d", numero2);

    return 0;

}
