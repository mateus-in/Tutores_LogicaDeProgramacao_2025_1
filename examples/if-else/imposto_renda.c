/*
  Implemente um programa em C que leia o salário mensal de uma pessoa (float)
  e calcule o imposto de renda a pagar segundo esta tabela simplificada:
    - Ate R$2000,00: isento.
    - De R$2000,01 ate R$3500,00: 10% sobre a parte que excede R$2000,00.
    - Acima de R$3500,00: 10% sobre R$1500,00 (parte de 2000,01 a 3500,00)
      mais 20% sobre o que exceder R$3500,00.
  Exibir o valor do imposto.
*/

#include <stdio.h>

int main()
{
  float salario, imposto = 0.0;
  float faixa10, faixa20;

  printf("Digite o salario: ");
  scanf("%f", &salario);

  if (salario <= 2000.0f)
  {
    imposto = 0.0f;
  }
  else if (salario <= 3500.0f)
  {
    // Aplica 10% somente na parte que excede 2000
    imposto = (salario - 2000.0f) * 0.10f;
  }
  else
  {
    // Faixa entre 2000 e 3500
    faixa10 = 1500.0f; // (3500 - 2000)
    // Excedente acima de 3500
    faixa20 = salario - 3500.0f;

    imposto = (faixa10 * 0.10f) + (faixa20 * 0.20f);
  }

  printf("Imposto devido: R$%.2f\n", imposto);

  return 0;
}