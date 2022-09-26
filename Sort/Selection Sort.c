#include <stdio.h>

int main()
{
  int i, j, menor, aux, vet[5] = {4, 2, 1, 5, 3}, k;

  for (i = 0; i < 5; i++)
  {
    menor = i;

    for (j = i + 1; j < 5; j++)
    {
      if (vet[j] < vet[menor])
      {
        menor = j;
      }
    }

    aux = vet[menor];
    vet[menor] = vet[i];
    vet[i] = aux;

    for (k = 0; k < 5; k++)
    {
      printf("%d ", vet[k]);
    }
    printf("\n");
  }
  return 0;
}