/*
  Um produto custa R$100,00. Escreva um programa em C que:
    1) Solicite a forma de pagamento:
      - Digite 1 para pagamento a vista (dinheiro/PIX)
      - Digite 2 para pagamento no cartao
    2) Se for a vista, aplicar 10% de desconto.
    3) Se for no cartao, manter o valor de R$100,00.
    4) Exibir o valor final a ser pago.
*/

#include <stdio.h>

int main()
{
  float precoBase = 100.0, valorFinal;
  int formaPagamento;

  printf("Forma de pagamento:\n");
  printf("1 - A vista (dinheiro/PIX)\n");
  printf("2 - Cartao\n");
  printf("Escolha: ");
  scanf("%d", &formaPagamento);

  if (formaPagamento == 1)
  {
    valorFinal = precoBase - (precoBase * 0.10);
    printf("Valor final: R$%.2f\n", valorFinal);
  }
  else if (formaPagamento == 2)
  {
    valorFinal = precoBase;
    printf("Valor final: R$%.2f\n", valorFinal);
  }
  else
  {
    printf("Opcao invalida.\n");
  }

  return 0;
}