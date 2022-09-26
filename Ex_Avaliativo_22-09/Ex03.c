/* Um armazém trabalha com 10 mercadorias diferentes identificadas pelos números inteiros de 0 a 9. O dono do armazém anota a quantidade de cada mercadoria vendida durante o mês. Ele tem uma tabela que indica para cada mercadoria o preço de venda. Escreva um programa que leia a quantidade vendida de cada produto no final do mês (armazenando-os em um vetor Q) e o preço de venda de cada um (armazenando-os em um vetor P). Em seguida, calcule e apresente o faturamento mensal do armazém. */

#include <stdio.h>

int main()
{
  float q[10], p[10], soma = 0;

  int i;

  for (i = 0; i < 10; i++)
  {

    printf("Digite a quantidade da mercadoria %d : ", i);
    scanf("%f", &q[i]);

    printf("Digite o preco da mercadoria %d : ", i);
    scanf("%f", &p[i]);
  }

  for (i = 0; i < 10; i++)
  {
    soma += q[i] * p[i];
  }

  printf("Faturamento mensal: %.2f", soma);
  return 0;
}