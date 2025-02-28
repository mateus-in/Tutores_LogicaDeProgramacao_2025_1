/*
  Peça ao usuário que digite um número inteiro repetidamente.
  Use do-while para garantir pelo menos uma leitura.
  O loop deve encerrar assim que o usuário digitar o valor 0.
  Antes de encerrar, exiba "Encerrando programa."
*/

#include <stdio.h>

int main()
{
  int numero;

  do
  {
    printf("Digite um numero inteiro (0 para sair): ");
    scanf("%d", &numero);

    if (numero != 0)
    {
      printf("Voce digitou: %d\n", numero);
    }
  } while (numero != 0);

  printf("Encerrando programa.\n");

  return 0;
}
