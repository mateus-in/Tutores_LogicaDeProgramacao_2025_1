/*
  Crie um programa em C que solicite ao usuário um valor inteiro
  de 1 a 7, representando dias da semana:
    1 - Domingo
    2 - Segunda
    3 - Terça
    4 - Quarta
    5 - Quinta
    6 - Sexta
    7 - Sábado
  Use switch para exibir o nome do dia correspondente.
  Se o usuário digitar um valor fora do intervalo 1-7,
  exibir "Valor inválido".
*/

#include <stdio.h>

int main()
{
  int dia;

  printf("Digite um numero (1 a 7) para o dia da semana: ");
  scanf("%d", &dia);

  switch (dia)
  {
  case 1:
    printf("Domingo\n");
    break;
  case 2:
    printf("Segunda\n");
    break;
  case 3:
    printf("Terca\n");
    break;
  case 4:
    printf("Quarta\n");
    break;
  case 5:
    printf("Quinta\n");
    break;
  case 6:
    printf("Sexta\n");
    break;
  case 7:
    printf("Sabado\n");
    break;
  default:
    printf("Valor invalido.\n");
    break;
  }

  return 0;
}