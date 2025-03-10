/*
  Crie um programa que leia 8 números, armazene-os em um vetor e depois os exiba na ordem inversa.
*/

#include <stdio.h>

int main()
{
  int numeros[8];

  // Entrada de dados
  for (int i = 0; i < 8; i++)
  {
    printf("Digite um número: ");
    scanf("%d", &numeros[i]);
  }

  // Saída: imprimir ao contrário
  printf("Números na ordem inversa:\n");
  for (int i = 7; i >= 0; i--)
  {
    printf("%d ", numeros[i]);
  }
  printf("\n");

  return 0;
}
