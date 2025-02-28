/*
  Crie um programa em C que solicite ao usuário um número de 1 a 12,
  representando os meses do ano. Use switch para:
    - Exibir o nome do mês
    - Exibir quantos dias tem o mês (supondo ano não bissexto)
  Se o valor estiver fora do intervalo de 1 a 12, exibir "Mes invalido".
*/

#include <stdio.h>

int main()
{
  int mes;

  printf("Digite um numero (1 a 12) para o mes do ano: ");
  scanf("%d", &mes);

  switch (mes)
  {
  case 1:
    printf("Mes: Janeiro - 31 dias\n");
    break;
  case 2:
    printf("Mes: Fevereiro - 28 dias (ano nao bissexto)\n");
    break;
  case 3:
    printf("Mes: Marco - 31 dias\n");
    break;
  case 4:
    printf("Mes: Abril - 30 dias\n");
    break;
  case 5:
    printf("Mes: Maio - 31 dias\n");
    break;
  case 6:
    printf("Mes: Junho - 30 dias\n");
    break;
  case 7:
    printf("Mes: Julho - 31 dias\n");
    break;
  case 8:
    printf("Mes: Agosto - 31 dias\n");
    break;
  case 9:
    printf("Mes: Setembro - 30 dias\n");
    break;
  case 10:
    printf("Mes: Outubro - 31 dias\n");
    break;
  case 11:
    printf("Mes: Novembro - 30 dias\n");
    break;
  case 12:
    printf("Mes: Dezembro - 31 dias\n");
    break;
  default:
    printf("Mes invalido.\n");
    break;
  }

  return 0;
}