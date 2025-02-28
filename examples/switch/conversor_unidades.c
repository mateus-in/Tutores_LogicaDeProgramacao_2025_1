/*
  Implemente um programa em C que exiba um menu de conversão
  de unidades de medida (por exemplo, comprimento). O usuário
  deve escolher entre:
    1 - Quilometros para Metros
    2 - Metros para Centimetros
    3 - Centimetros para Milimetros
    4 - Sair
  Use switch para tratar cada caso. Se o usuário escolher
  uma das opções de conversão, peça o valor a ser convertido
  e exiba o resultado. Se o usuário digitar 4, o programa
  encerra. Qualquer outra opção exibe "Opcao invalida".
*/

#include <stdio.h>

int main()
{
  int opcao;
  float valor, resultado;

  do
  {
    printf("\n=== Conversor de Unidades de Comprimento ===\n");
    printf("1 - Quilometros para Metros\n");
    printf("2 - Metros para Centimetros\n");
    printf("3 - Centimetros para Milimetros\n");
    printf("4 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
      printf("Digite o valor em quilometros: ");
      scanf("%f", &valor);
      resultado = valor * 1000;
      printf("%.2f km = %.2f m\n", valor, resultado);
      break;
    case 2:
      printf("Digite o valor em metros: ");
      scanf("%f", &valor);
      resultado = valor * 100;
      printf("%.2f m = %.2f cm\n", valor, resultado);
      break;
    case 3:
      printf("Digite o valor em centimetros: ");
      scanf("%f", &valor);
      resultado = valor * 10;
      printf("%.2f cm = %.2f mm\n", valor, resultado);
      break;
    case 4:
      printf("Encerrando o programa...\n");
      break;
    default:
      printf("Opcao invalida. Tente novamente.\n");
      break;
    }
  } while (opcao != 4);

  return 0;
}