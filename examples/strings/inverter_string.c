/*
  Escreva um programa que leia uma palavra e a exiba invertida.
*/

#include <stdio.h>
#include <string.h>

int main()
{
  char palavra[100];

  printf("Digite uma palavra: ");
  scanf("%s", palavra);

  // Inverte a string
  int tamanho = strlen(palavra);
  printf("String invertida: ");
  for (int i = tamanho - 1; i >= 0; i--)
  {
    printf("%c", palavra[i]);
  }
  printf("\n");

  return 0;
}
