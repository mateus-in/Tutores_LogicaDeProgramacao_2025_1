/*
  Calcule a média de notas (float) fornecidas pelo usuário.
  O usuário deve digitar notas uma a uma, e o programa só encerra
  quando for digitada uma nota negativa (que não deve entrar no cálculo).
  Ao final, exiba quantas notas foram válidas e a média dessas notas.
*/

#include <stdio.h>

int main()
{
  float nota, soma = 0.0f;
  int contador = 0;

  printf("Digite notas (valor negativo para encerrar):\n");
  scanf("%f", &nota);

  while (nota >= 0.0f)
  {
    soma += nota;
    contador++;
    scanf("%f", &nota);
  }

  if (contador > 0)
  {
    printf("Foram lidas %d notas validas.\n", contador);
    printf("Media das notas: %.2f\n", soma / contador);
  }
  else
  {
    printf("Nenhuma nota valida foi digitada.\n");
  }

  return 0;
}