#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    int *ptrInteiro;
    float *ptrReal;
    char *ptrChar;

    ptrInteiro = &inteiro;
    ptrReal = &real;
    ptrChar = &caractere;

    printf("\n Valores iniciais:");
    printf("\n Inteiro: %d", inteiro);
    printf("\n Real: %.2f", real);
    printf("\n Char: %c", caractere);

    *ptrInteiro = 20;
    *ptrReal = 1.23;
    *ptrChar = 'B';

    printf("\n Valores depois da modificacao:");
    printf("\n Inteiro: %d", inteiro);
    printf("\n Real: %.2f", real);
    printf("\n Char: %c", caractere);

    return 0;

}
