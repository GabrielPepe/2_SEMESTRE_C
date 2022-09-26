/* A definição de "amplitude" em Estatística é dada pela grandeza numérica resultante da diferença entre o maior valor e o menor valor do conjunto de valores de uma amostra. Escreva programa que leia uma sequencia de números reais positivos terminada em zero (o número zero não deve ser processado pois serve para marcar o final da entrada de dados). O programa deve determinar e mostrar o valor da amplitude estatística dos valores. Exemplo: para a sequencia 4.5, 5.2, 1.7, 1.3, 1.9, 2.2, 8.3, 9.1, 5.4 e 0, teremos o resultado de 7.8 como amplitude. */

#include <stdio.h>

int main()
{
  float n, maior = 0, menor = 0, amp;
  int cont = 0;

  printf("Digite um valor: ");
  scanf("%f", &n);
  maior = n;
  menor = n;

  while (n > 0)
  {
    printf("Digite um valor: ");
    scanf("%f", &n);

    if (n > 0)
    {
      if (n > maior)
      {
        maior = n;
      }
      if (n < menor)
      {

        menor = n;
      }
    }
  }
  amp = maior - menor;
  printf("A amplitude é de: %.1f", amp);
  return 0;
}