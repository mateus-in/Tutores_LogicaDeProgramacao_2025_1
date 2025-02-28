/*
  Permita que o usuario digite varios numeros para somar
  em uma variavel acumuladora. Depois de cada entrada,
  pergunte se deseja continuar digitando (S/N).
  Use do-while para repetir enquanto a resposta for 'S' ou 's'.
  No final, exiba a soma total dos numeros digitados.
*/

#include <stdio.h>

int main()
{
  float numero, soma = 0.0f;
  char resposta;

  do
  {
    printf("Digite um numero: ");
    scanf("%f", &numero);
    soma += numero;

    printf("Deseja adicionar outro numero? (S/N): ");
    scanf(" %c", &resposta); // Espaco antes de %c para ignorar enter
  } while (resposta == 'S' || resposta == 's');

  printf("Soma total: %.2f\n", soma);

  return 0;
}