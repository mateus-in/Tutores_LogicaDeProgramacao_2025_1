/*
  Crie um programa em C que:
  1. Leia dois valores reais (float) do usuário.
  2. Calcule e exiba a soma, a subtração, a multiplicação e a divisão (se possível) desses valores.
*/

#include <stdio.h>

int main()
{
  float num1, num2;

  printf("Digite dois valores reais (ex: 3.2 4.5): ");
  scanf("%f %f", &num1, &num2); // Lê dois valores float

  printf("Soma: %.2f\n", (num1 + num2));
  printf("Subtracao: %.2f\n", (num1 - num2));
  printf("Multiplicacao: %.2f\n", (num1 * num2));

  if (num2 != 0)
  {
    printf("Divisao: %.2f\n", (num1 / num2));
  }
  else
  {
    printf("Divisao: nao e possivel dividir por zero.\n");
  }

  return 0;
}