/*
  Faça um programa que peça uma frase ao usuário e conte quantas vogais (a, e, i, o, u) ela possui.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char frase[200];
  int contador = 0;

  printf("Digite uma frase: ");
  fgets(frase, 200, stdin); // Permite ler frases com espaços

  for (int i = 0; frase[i] != '\0'; i++)
  {
    char c = tolower(frase[i]); // Converte para minúsculo
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
      contador++;
    }
  }

  printf("Número de vogais: %d\n", contador);

  return 0;
}
