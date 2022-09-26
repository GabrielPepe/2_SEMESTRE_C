#include <stdio.h>

int main()
{
  int i, j, aux, k, vetor[5] = {5, 2, 4, 3, 1};

  for (i = 5; i > 0; i--)
  {

    for (j = 1; j <= i - 1; j++)
    {
      if (vetor[j - 1] > vetor[j])
      {
        aux = vetor[j];
        vetor[j] = vetor[j - 1];
        vetor[j - 1] = aux;
      }
    }
    for (k = 0; k < 5; k++)
    {
      printf("%d", vetor[k]);
    }
    printf("\n");
  }

  return 0;
}