/*
  Faça um programa em C que leia do usuário um número inteiro N
  e desenhe na tela um triângulo de asteriscos (*) com N linhas,
  usando o comando for.
  Exemplo para N = 5:
        *
       ***
      *****
     *******
    *********

  Dica: observe que cada linha possui uma certa quantidade de espaços
  em branco antes dos asteriscos, e a quantidade de asteriscos aumenta
  conforme a linha atual.
*/

#include <stdio.h>

int main()
{
  int N, i, j, espacos, asteriscos;

  printf("Digite o numero de linhas do triangulo: ");
  scanf("%d", &N);

  for (i = 1; i <= N; i++)
  {
    // Calcula quantos espaços imprimir antes de começar a imprimir asteriscos
    espacos = N - i;
    // A quantidade de asteriscos em cada linha é (2 * i) - 1
    asteriscos = (2 * i) - 1;

    // Imprime os espaços
    for (j = 0; j < espacos; j++)
    {
      printf(" ");
    }

    // Imprime os asteriscos
    for (j = 0; j < asteriscos; j++)
    {
      printf("*");
    }

    // Quebra de linha após cada linha de triângulo
    printf("\n");
  }

  return 0;
}