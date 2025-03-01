/*
  Peça ao usuário um número inteiro e use if-else para verificar se
  ele é par ou ímpar, exibindo a mensagem correspondente.
*/

#include <stdio.h>

int main()
{
  int numero;

  printf("Digite um numero inteiro: ");
  scanf("%d", &numero);

  if (numero % 2 == 0)
  {
    printf("O numero %d eh par.\n", numero);
  }
  else
  {
    printf("O numero %d eh impar.\n", numero);
  }

  return 0;
}