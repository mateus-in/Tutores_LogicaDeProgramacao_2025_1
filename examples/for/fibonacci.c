/*
  Crie um programa em C que solicite ao usuário um valor inteiro N
  e exiba os N primeiros termos da sequência de Fibonacci.
  A sequência de Fibonacci inicia em 0 e 1, e cada termo seguinte
  é a soma dos dois anteriores. Exemplo: 0, 1, 1, 2, 3, 5, 8, ...
*/

#include <stdio.h>

int main()
{
  int n, i;
  long long anterior = 0, atual = 1, proximo;

  printf("Quantos termos da Fibonacci deseja exibir? ");
  scanf("%d", &n);

  if (n <= 0)
  {
    printf("Valor invalido.\n");
    return 0;
  }

  // Exibe o primeiro termo
  printf("%lld ", anterior);

  // Se n > 1, exibe o segundo termo
  if (n > 1)
  {
    printf("%lld ", atual);
  }

  // Exibe do terceiro termo em diante
  for (i = 3; i <= n; i++)
  {
    proximo = anterior + atual;
    printf("%lld ", proximo);

    anterior = atual;
    atual = proximo;
  }
  printf("\n");

  return 0;
}