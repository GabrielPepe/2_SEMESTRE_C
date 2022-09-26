/* Escreva um programa que simule um saque de dinheiro em um caixa eletrônico. As cédulas disponíveis são 5, 10, 20, 50 e 100. O programa deve fornecer a menor quantidade de cédulas possível de acordo com o saque. Exemplos:

- Saque de 400,00: 4 cédulas de 100.
- Saque de 350,00: 3 cédulas de 100 e 1 cédulas nota de 50.
- Saque de 385,00: 3 cédulas de 100, 1 cédula de 50, 1 cédula de 20, 1 cédula de 10 e 1 cédula de 5.

Observações:
- O valor do saque deve estar limitado entre 10,00 e 1.000,00.
- O programa deve permitir apenas saques de valores múltiplos de 5,00.

Caso o usuário viole alguma das duas observações anteriores (ou ambas), deve ser solicitado novamente o valor do saque. */

#include <stdio.h>

int main()
{
  int saque, cem, cinq, vinte, dez, cinco;

  printf("Digite um valor para seu saque: ");
  scanf("%d", &saque);

  if (saque % 5 == 0)
  {
    if (saque >= 10 && saque <= 1000)
    {
      cem = saque / 100;
      saque = saque - cem * 100;
      cinq = saque / 50;
      saque -= cinq * 50;
      vinte = saque / 20;
      saque -= vinte * 20;
      dez = saque / 10;
      saque -= dez * 10;
      cinco = saque / 5;
      saque -= cinco * 5;
    }
    else
    {
      printf("O valor dee estar entre 10 e 1000!");
    }
  }
  else
  {
    printf("O valor deve ser multiplo de 5!");
  }
  printf("Voce recebera %d notas de R$100,00 \n%d notas de R$50,00 \n%d notas de R$20,00 \n%d notas de R$10 \n%d notas de R$5,00", cem, cinq, vinte, dez, cinco);
  return 0;
}