/*
  Crie um programa que peça ao usuário para digitar uma palavra e exiba quantos caracteres essa palavra possui (sem contar \0).
*/

#include <stdio.h>
#include <string.h>

int main()
{
  char palavra[100];

  printf("Digite uma palavra: ");
  fgets(palavra, sizeof(palavra), stdin);

  // Remover o '\n' inserido pelo fgets()
  palavra[strcspn(palavra, "\n")] = '\0';

  printf("Tamanho da string: %lu caracteres\n", strlen(palavra));

  return 0;
}