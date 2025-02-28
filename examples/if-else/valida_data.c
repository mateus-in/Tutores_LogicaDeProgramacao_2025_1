/*
  Crie um programa em C que leia o dia, o mês e o ano de uma data (valores inteiros).
  O programa deve verificar:
    - Se o dia está entre 1 e 31,
    - Se o mês está entre 1 e 12,
    - Se o ano for maior que 0.

  Exibir “Data valida” se todos os valores forem coerentes ou “Data invalida”
  caso contrário (sem considerar meses com menos de 31 dias ou anos bissextos).
*/

#include <stdio.h>

int main()
{
  int dia, mes, ano;

  printf("Digite o dia: ");
  scanf("%d", &dia);
  printf("Digite o mes: ");
  scanf("%d", &mes);
  printf("Digite o ano: ");
  scanf("%d", &ano);

  if (dia >= 1 && dia <= 31)
  {
    if (mes >= 1 && mes <= 12)
    {
      if (ano > 0)
      {
        printf("Data valida\n");
      }
      else
      {
        printf("Data invalida\n");
      }
    }
    else
    {
      printf("Data invalida\n");
    }
  }
  else
  {
    printf("Data invalida\n");
  }

  return 0;
}