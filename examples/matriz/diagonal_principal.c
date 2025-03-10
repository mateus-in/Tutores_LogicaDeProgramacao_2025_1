/*
  Crie um programa que leia uma matriz 3x3 e exiba apenas os elementos da diagonal principal.
*/

#include <stdio.h>

int main()
{
  int matriz[3][3];

  // Entrada de dados
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("Digite um número para posição [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  // Saída: Exibir diagonal principal
  printf("Diagonal principal:\n");
  for (int i = 0; i < 3; i++)
  {
    printf("%d ", matriz[i][i]);
  }
  printf("\n");

  return 0;
}
