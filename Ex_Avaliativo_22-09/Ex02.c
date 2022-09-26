#include <stdio.h>

/* Escreva um programa que mostre o resultado de S = 1/100 + 2/99 + 3/98 + 4/97 + ... + 100/1. */

int main()
{
  float soma = 0;
  float i, j;

  for (i = 1, j = 100; i < 101; i++, j--)
  {
    soma += i / j;
    printf("\n%f", soma);
  }
  return 0;
}
