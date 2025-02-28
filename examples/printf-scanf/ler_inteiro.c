/*
  Faça um programa em C que:
    1. Peça ao usuário que digite um número inteiro.
    2. Em seguida, exiba esse número na tela.
*/

#include <stdio.h>

int main()
{
  int numero;

  printf("Digite um numero inteiro: ");
  scanf("%d", &numero); // Lê um número inteiro e armazena em "numero"

  printf("Voce digitou: %d\n", numero); // Exibe o valor armazenado

  return 0;
}