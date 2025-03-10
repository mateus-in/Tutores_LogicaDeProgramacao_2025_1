/*
  Faça um programa que leia uma matriz 3x3 e exiba a soma dos elementos de cada linha.
*/

#include <stdio.h>

int main()
{
  int matriz[3][3], soma;

  // Entrada de dados
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("Digite um número para posição [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  // Processamento e saída
  for (int i = 0; i < 3; i++)
  {
    soma = 0;
    for (int j = 0; j < 3; j++)
    {
      soma += matriz[i][j];
    }
    printf("Soma da linha %d: %d\n", i, soma);
  }

  return 0;
}
