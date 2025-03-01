/*
  Use scanf para ler um nome (sem espaco) e uma idade,
  depois exiba na tela a mensagem:
  "Ola, <nome>! Voce tem <idade> anos."
*/

#include <stdio.h>

int main()
{
  char nome[50];
  int idade;

  printf("Digite seu primeiro nome (sem espacos): ");
  scanf("%s", nome);

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  printf("Ola, %s! Voce tem %d anos.\n", nome, idade);

  return 0;
}