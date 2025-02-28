/*
  Faça um programa que peça ao usuário que digite números inteiros
  indefinidamente. O loop deve continuar enquanto o usuário
  não digitar zero. Quando o usuário digitar zero, o programa
  encerra. Exiba na tela cada valor digitado antes do encerramento.
*/

#include <stdio.h>

int main()
{
  int numero;

  printf("Digite numeros inteiros (0 para sair):\n");
  scanf("%d", &numero);

  while (numero != 0)
  {
    printf("Voce digitou: %d\n", numero);
    scanf("%d", &numero);
  }

  printf("Encerrando o programa.\n");

  return 0;
}