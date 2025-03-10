/*
  Crie um programa que leia uma matriz 3x3, exiba a soma de todos os elementos e a matriz digitada.
*/

#include <stdio.h>

int main()
{
  int matriz[3][3], soma = 0;

  // Entrada de dados
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("Digite um número para posição [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
      soma += matriz[i][j];
    }
  }

  // Saída
  printf("Matriz digitada:\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("Soma de todos os elementos: %d\n", soma);

  return 0;
}
