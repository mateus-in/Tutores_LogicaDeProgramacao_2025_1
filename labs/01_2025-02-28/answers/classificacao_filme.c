/*
  Crie um pequeno menu com classificacoes indicativas de um filme:
    1 - Livre
    2 - 10 anos
    3 - 12 anos
    4 - 14 anos
    5 - 16 anos
    6 - 18 anos
  Use switch para exibir uma mensagem com a classificacao selecionada.
  Se a opcao nao for nenhuma dessas, exibir "Opcao invalida".
*/

#include <stdio.h>

int main()
{
  int opcao;

  printf("Classificacao indicativa:\n");
  printf("1 - Livre\n");
  printf("2 - 10 anos\n");
  printf("3 - 12 anos\n");
  printf("4 - 14 anos\n");
  printf("5 - 16 anos\n");
  printf("6 - 18 anos\n");
  printf("Selecione uma opcao: ");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    printf("Classificacao: Livre.\n");
    break;
  case 2:
    printf("Classificacao: 10 anos.\n");
    break;
  case 3:
    printf("Classificacao: 12 anos.\n");
    break;
  case 4:
    printf("Classificacao: 14 anos.\n");
    break;
  case 5:
    printf("Classificacao: 16 anos.\n");
    break;
  case 6:
    printf("Classificacao: 18 anos.\n");
    break;
  default:
    printf("Opcao invalida.\n");
    break;
  }

  return 0;
}