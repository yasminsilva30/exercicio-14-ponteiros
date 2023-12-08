#include <stdio.h>

int main() {
  int numero1 = 10;
  int numero2 = 20;

  int *ptrNumero1 = &numero1;
  int *ptrNumero2 = &numero2;

  if (ptrNumero1 > ptrNumero2) {
    printf("\n O endereco de numero1 (%p) eh maior", (void *)ptrNumero1);
  } else if (ptrNumero1 < ptrNumero2) {
    printf("\n O endereço de numero2 (%p) eh maior", (void *)ptrNumero2);
  } else {
    printf("\n Os enderecos sao iguais");
  }

  return 0;
  
}
