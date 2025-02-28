/*
  Implemente um menu simples usando do-while.
  As opcoes sao:
    1 - Exibir mensagem "Opcao 1 selecionada"
    2 - Exibir mensagem "Opcao 2 selecionada"
    3 - Encerrar
  Se o usuario digitar algo fora de 1, 2 ou 3, exibir "Opcao invalida".
  Quando a opcao for 3, encerrar o programa.
*/

#include <stdio.h>

int main()
{
  int opcao;

  do
  {
    printf("\n---- MENU ----\n");
    printf("1 - Opcao 1\n");
    printf("2 - Opcao 2\n");
    printf("3 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      printf("Opcao 1 selecionada.\n");
      break;
    case 2:
      printf("Opcao 2 selecionada.\n");
      break;
    case 3:
      printf("Encerrando...\n");
      break;
    default:
      printf("Opcao invalida.\n");
    }
  } while (opcao != 3);

  return 0;
}