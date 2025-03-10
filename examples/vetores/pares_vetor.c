/*
  Desenvolva um programa que leia 10 números inteiros, armazene-os em um vetor e exiba apenas os valores pares.
*/

#include <stdio.h>

int main()
{
  int numeros[10];

  // Entrada de dados
  for (int i = 0; i < 10; i++)
  {
    printf("Digite um número: ");
    scanf("%d", &numeros[i]);
  }

  // Saída: Exibir apenas números pares
  printf("Números pares digitados:\n");
  for (int i = 0; i < 10; i++)
  {
    if (numeros[i] % 2 == 0)
    {
      printf("%d ", numeros[i]);
    }
  }
  printf("\n");

  return 0;
}
