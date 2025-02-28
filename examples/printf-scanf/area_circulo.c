/*
  Faça um programa em C que:
    1. Peça ao usuário o valor do raio de um círculo (float).
    2. Calcule e exiba a área e a circunferência do círculo.
      - Área = π * raio^2
      - Circunferência = 2 * π * raio
      (Use 3.14159 para o valor de π ou utilize a constante M_PI se disponível)
*/

#include <stdio.h>

int main()
{
  float raio, area, circunferencia;
  const float PI = 3.14159f; // ou use #include <math.h> e M_PI

  printf("Digite o valor do raio: ");
  scanf("%f", &raio);

  area = PI * (raio * raio);
  circunferencia = 2 * PI * raio;

  printf("Area do circulo: %.2f\n", area);
  printf("Circunferencia do circulo: %.2f\n", circunferencia);

  return 0;
}