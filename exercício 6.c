#include <stdio.h>

int somaDobro(int *ptrA, int *ptrB) {
    *ptrA = 2 * (*ptrA);

    *ptrB = 2 * (*ptrB);

    return (*ptrA + *ptrB);
  
}

int main() {
    int numeroA, numeroB;

    printf("\n Digite o valor inteiro para A: \n ");
    scanf("%d", &numeroA);

    printf("\n\n Digite o valor inteiro para B: \n");
    scanf("%d", &numeroB);

    int resultado = somaDobro(&numeroA, &numeroB);

    printf("\n Valores apos a chamada da funcao:");
    printf("\n Numero A (dobro): %d", numeroA);
    printf("\n Numero B (dobro): %d", numeroB);
    printf("\n Soma do dobro de A e B: %d", resultado);

    return 0;
  
}
