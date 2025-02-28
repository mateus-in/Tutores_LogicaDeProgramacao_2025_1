/*
  Crie um programa que solicite um número inteiro N ao usuário
  e exiba todos os valores de 1 até N na tela, um por linha,
  usando a estrutura while para controlar o loop.
  Se N for menor ou igual a zero, exiba "Valor invalido" e encerre.
*/

#include <stdio.h>

int main()
{
  int N, i = 1;

  printf("Digite um numero inteiro: ");
  scanf("%d", &N);

  if (N <= 0)
  {
    printf("Valor invalido.\n");
  }
  else
  {
    while (i <= N)
    {
      printf("%d\n", i);
      i++;
    }
  }

  return 0;
}