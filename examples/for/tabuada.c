/*
  Escreva um programa em C que solicite ao usuário um número inteiro
  e exiba a tabuada desse número de 1 a 10, usando o comando for.
  Exemplo de saída para entrada 5:
    5 x 1 = 5
    5 x 2 = 10
    ...
    5 x 10 = 50
*/

#include <stdio.h>

int main()
{
  int num, i;

  printf("Digite um numero inteiro para gerar a tabuada: ");
  scanf("%d", &num);

  for (i = 1; i <= 10; i++)
  {
    printf("%d x %d = %d\n", num, i, num * i);
  }

  return 0;
}