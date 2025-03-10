/*
  Crie um programa em C que leia 10 números inteiros, armazene-os em um vetor e exiba o maior valor inserido.
*/

#include <stdio.h>

int main()
{
  int numeros[10], maior;

  // Entrada de dados
  for (int i = 0; i < 10; i++)
  {
    printf("Digite um número: ");
    scanf("%d", &numeros[i]);
  }

  // Processamento: encontrar o maior valor
  maior = numeros[0];
  for (int i = 1; i < 10; i++)
  {
    if (numeros[i] > maior)
    {
      maior = numeros[i];
    }
  }

  // Saída
  printf("O maior número digitado foi: %d\n", maior);

  return 0;
}