#include <stdio.h>

void calcularSoma(int *ptrA, int B) {
    *ptrA = *ptrA + B;
}

int main() {
    int numeroA, numeroB;

    printf("\n Digite um numero inteiro para A: \n");
    scanf("%d", &numeroA);

    printf("\n\n Digite um numero inteiro para B: \n");
    scanf("%d", &numeroB);

    calcularSoma(&numeroA, numeroB);

    printf("\n Valores apos a chamada da função:");
    printf("\n Valor de A (modificado): %d", numeroA);
    printf("\n Valor de B: %d", numeroB);

    return 0;
  
}
