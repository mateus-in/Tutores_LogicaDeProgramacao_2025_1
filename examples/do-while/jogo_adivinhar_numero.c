/*
  O programa escolhe um numero "secreto" (por exemplo, 15).
  O usuario deve tentar adivinhar esse numero. Se ele errar,
  o programa diz "Tente novamente" e pede outro palpite.
  Quando o palpite for igual ao numero secreto, exibe
  "Voce acertou!" e encerra. Use do-while para controlar
  as tentativas.
*/

#include <stdio.h>

int main()
{
  const int NUMERO_SECRETO = 15;
  int palpite;

  do
  {
    printf("Adivinhe o numero secreto: ");
    scanf("%d", &palpite);

    if (palpite != NUMERO_SECRETO)
    {
      printf("Tente novamente...\n");
    }
  } while (palpite != NUMERO_SECRETO);

  printf("Voce acertou!\n");

  return 0;
}