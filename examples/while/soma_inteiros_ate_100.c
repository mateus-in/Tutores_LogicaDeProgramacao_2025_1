/*
  Peça ao usuário que digite números inteiros (um de cada vez)
  e some-os em uma variável acumuladora. Continue solicitando
  números enquanto a soma acumulada for menor que 100.
  Quando a soma for igual ou maior que 100, exiba o valor final
  e encerre.
*/

#include <stdio.h>

int main()
{
  int numero;
  int soma = 0;

  while (soma < 100)
  {
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    soma += numero;
  }

  printf("A soma atingiu ou ultrapassou 100. Valor acumulado: %d\n", soma);

  return 0;
}