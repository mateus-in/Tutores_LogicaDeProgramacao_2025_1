/*
  Elabore um programa em C que:
    1. Leia do usuário um número inteiro, um número real (float) e um caractere.
    2. Em seguida, exiba cada um deles em uma única linha, com uma breve descrição.

  Exemplo de saída:
  "Numero inteiro: 10 | Numero real: 5.50 | Caractere: A"
*/

#include <stdio.h>

int main()
{
  int inteiro;
  float real;
  char caractere;

  printf("Digite um numero inteiro: ");
  scanf("%d", &inteiro);

  printf("Digite um numero real: ");
  scanf("%f", &real);

  printf("Digite um caractere: ");
  scanf(" %c", &caractere);
  // Note o espaco antes de %c para ignorar o caractere de nova linha pendente.

  printf("Numero inteiro: %d | Numero real: %.2f | Caractere: %c\n",
         inteiro, real, caractere);

  return 0;
}