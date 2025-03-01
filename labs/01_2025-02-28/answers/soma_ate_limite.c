/*
  Peça ao usuário que digite vários numeros inteiros (um por vez),
  e some-os enquanto o total acumulado for menor que 100.
  Use a estrutura while para controlar o loop.
  Quando a soma ultrapassar ou atingir 100, encerre e exiba
  o valor total acumulado.
*/

#include <stdio.h>

int main()
{
  int numero;
  int soma = 0;

  printf("Digite numeros inteiros para somar (encerra quando soma >= 100):\n");

  while (soma < 100)
  {
    printf("Digite um numero: ");
    scanf("%d", &numero);
    soma += numero;
  }

  printf("A soma chegou a %d. Encerrando.\n", soma);

  return 0;
}