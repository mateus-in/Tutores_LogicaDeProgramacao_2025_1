/*
  Elabore um programa em C que exiba um pequeno menu de operações básicas.
  O usuário deve digitar um valor inteiro (1, 2 ou 3):
    1 - Soma de dois números
    2 - Subtração de dois números
    3 - Finalizar
  Se a opção for 1 ou 2, o programa pede dois valores e exibe o resultado.
  Se for 3, simplesmente encerra. Qualquer outro valor deve exibir "Opção inválida".
  Use switch para escolher a operação.
*/

#include <stdio.h>

int main()
{
  int opcao;
  float num1, num2, resultado;

  printf("Menu de Operacoes:\n");
  printf("1 - Soma\n");
  printf("2 - Subtracao\n");
  printf("3 - Finalizar\n");
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
    printf("Encerrando o programa...\n");
    break;
  default:
    printf("Opcao invalida.\n");
    break;
  }

  return 0;
}