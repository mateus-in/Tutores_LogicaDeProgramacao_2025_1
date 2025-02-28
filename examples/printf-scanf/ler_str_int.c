/*
  Escreva um programa em C que:
    1. Leia uma string (nome) e um inteiro (idade) do usuário.
    2. Em seguida, exiba na tela: "Ola, <nome>! Voce tem <idade> anos."
*/

#include <stdio.h>

int main()
{
  char nome[50]; // Vetor de char para armazenar o nome (até 49 caracteres + terminador)
  int idade;

  printf("Digite seu primeiro nome (sem espacos): ");
  scanf("%s", nome); // Lê string até encontrar um espaço ou quebra de linha

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  printf("Ola, %s! Voce tem %d anos.\n", nome, idade);

  return 0;
}