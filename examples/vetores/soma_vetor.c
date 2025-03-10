/*
  Faça um programa em C que leia 5 números inteiros, armazene-os em um vetor e exiba a soma de todos os elementos.
*/

#include <stdio.h>

int main()
{
  int numeros[5], soma = 0;

  // Entrada de dados
  for (int i = 0; i < 5; i++)
  {
    printf("Digite um número: ");
    scanf("%d", &numeros[i]);
  }

  // Processamento: soma dos valores
  for (int i = 0; i < 5; i++)
  {
    soma += numeros[i];
  }

  // Saída
  printf("Soma dos números: %d\n", soma);

  return 0;
}
