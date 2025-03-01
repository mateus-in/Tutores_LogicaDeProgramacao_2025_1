/*
  Use a estrutura for para exibir todos os numeros impares
  de 1 ate 99 na tela, cada um em uma linha.
*/

#include <stdio.h>

int main()
{
  int i;

  for (i = 1; i <= 99; i += 2)
  {
    printf("%d\n", i);
  }

  return 0;
}