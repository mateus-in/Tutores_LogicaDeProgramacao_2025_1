/*
  Crie um programa em C que solicite ao usuário um número inteiro
  e verifique se ele é positivo, negativo ou zero, exibindo uma mensagem
  apropriada em cada caso.
*/

#include <stdio.h>

int main()
{
  int numero;

  printf("Digite um numero inteiro: ");
  scanf("%d", &numero);

  if (numero > 0)
  {
    printf("O numero %d e positivo.\n", numero);
  }
  else if (numero < 0)
  {
    printf("O numero %d e negativo.\n", numero);
  }
  else
  {
    printf("O numero e zero.\n");
  }

  return 0;
}