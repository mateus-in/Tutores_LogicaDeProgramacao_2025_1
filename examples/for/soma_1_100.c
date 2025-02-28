/*
  Crie um programa em C que some todos os números de 1 até 100,
  mostrando o resultado final na tela. Utilize o for para
  percorrer os valores de 1 a 100.
*/

#include <stdio.h>

int main()
{
  int i;
  int soma = 0;

  for (i = 1; i <= 100; i++)
  {
    soma += i; // soma = soma + i
  }

  printf("A soma dos numeros de 1 a 100 eh: %d\n", soma);

  return 0;
}