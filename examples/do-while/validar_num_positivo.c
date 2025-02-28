/*
  Peça ao usuário para digitar um número inteiro positivo (maior que 0).
  Se o usuário digitar um valor negativo ou zero, peça novamente
  até que um valor valido seja fornecido. Use do-while para
  garantir que o usuário digite pelo menos uma vez.
  Ao final, exiba o valor valido digitado.
*/

#include <stdio.h>

int main()
{
  int numero;

  do
  {
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0)
    {
      printf("Valor invalido, tente novamente.\n");
    }
  } while (numero <= 0);

  printf("Voce digitou: %d\n", numero);

  return 0;
}