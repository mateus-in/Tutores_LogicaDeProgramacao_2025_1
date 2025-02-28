/*
  Escreva um programa em C que funcione como uma calculadora simples,
  com as operações: soma, subtração, multiplicação e divisão.
  O usuário deve escolher a operação digitando:
    1 - Soma
    2 - Subtracao
    3 - Multiplicacao
    4 - Divisao
  Use switch para decidir qual operação executar e, em seguida,
  peça ao usuário dois números para realizar o cálculo. Exiba o resultado.
  Caso a opção seja diferente de 1, 2, 3 ou 4, exiba "Opcao invalida".
*/

#include <stdio.h>

int main()
{
  int opcao;
  float num1, num2, resultado;

  printf("Calculadora Simples:\n");
  printf("1 - Soma\n");
  printf("2 - Subtracao\n");
  printf("3 - Multiplicacao\n");
  printf("4 - Divisao\n");
  printf("Escolha uma opcao: ");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);
    resultado = num1 + num2;
    printf("Resultado da soma: %.2f\n", resultado);
    break;
  case 2:
    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);
    resultado = num1 - num2;
    printf("Resultado da subtracao: %.2f\n", resultado);
    break;
  case 3:
    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);
    resultado = num1 * num2;
    printf("Resultado da multiplicacao: %.2f\n", resultado);
    break;
  case 4:
    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);
    if (num2 == 0)
    {
      printf("Erro: divisao por zero nao permitida.\n");
    }
    else
    {
      resultado = num1 / num2;
      printf("Resultado da divisao: %.2f\n", resultado);
    }
    break;
  default:
    printf("Opcao invalida.\n");
    break;
  }

  return 0;
}