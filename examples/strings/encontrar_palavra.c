/*
  Faça um programa que peça uma frase e uma palavra e diga se a palavra está contida na frase.
*/

#include <stdio.h>
#include <string.h>

int main()
{
  char frase[200], palavra[50];

  printf("Digite uma frase: ");
  fgets(frase, 200, stdin);

  printf("Digite a palavra a buscar: ");
  scanf("%s", palavra);

  if (strstr(frase, palavra) != NULL)
  {
    printf("A palavra \"%s\" está na frase.\n", palavra);
  }
  else
  {
    printf("A palavra \"%s\" NÃO está na frase.\n", palavra);
  }

  return 0;
}
