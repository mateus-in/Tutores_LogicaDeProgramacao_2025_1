/*
  Faça um programa que leia uma matriz 3x3 e exiba sua matriz transposta (troca de linhas por colunas).
*/

#include <stdio.h>

int main()
{
  int matriz[3][3], transposta[3][3];

  // Entrada de dados
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("Digite um número para posição [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  // Gerando a matriz transposta
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      transposta[j][i] = matriz[i][j]; // Inverte os índices
    }
  }

  // Exibindo a matriz transposta
  printf("Matriz Transposta:\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", transposta[i][j]);
    }
    printf("\n");
  }

  return 0;
}
