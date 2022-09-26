#include <stdio.h>

/* Escreva um programa que calcule e mostre o consumo médio e a autonomia que um veículo ainda teria antes de um abastecimento de combustível. Considere que o veículo sempre seja abastecido até encher o tanque e que são fornecidas apenas a capacidade do tanque, a quantidade de litros abastecidos e a quilometragem percorrida desde o último abastecimento. */

int main()
{
  float capac, qtd_l, km_p, consumo, aut;

  printf("Qual e a capacidade do seu tanque? ");
  scanf("%f", &capac);

  printf("Quantos litros voce abasteceu? ");
  scanf("%f", &qtd_l);

  printf("Quantos km foram percorridos desde o ultimo abastecimento? ");
  scanf("%f", &km_p);

  consumo = km_p / qtd_l;
  printf("\n\nSeu consumo e de %.2f Km/l!", consumo);

  aut = (capac - qtd_l) * consumo;
  printf("\nSua autonomia ainda seria de %.2f Km.", aut);

  return 0;
}
