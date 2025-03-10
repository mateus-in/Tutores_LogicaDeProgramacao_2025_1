/*
  Crie um programa que peça duas palavras e verifique se elas são iguais ou diferentes (ignorando maiúsculas e minúsculas).
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLowerCase(char *str)
{
  while (*str)
  {
    *str = tolower(*str);
    str++;
  }
}

int main()
{
  char str1[100], str2[100];

  printf("Digite a primeira palavra: ");
  scanf("%s", str1);
  printf("Digite a segunda palavra: ");
  scanf("%s", str2);

  toLowerCase(str1);
  toLowerCase(str2);

  if (strcmp(str1, str2) == 0)
  {
    printf("As palavras são iguais.\n");
  }
  else
  {
    printf("As palavras são diferentes.\n");
  }

  return 0;
}
