/*
  Utilizando structs, faça um programa que permita cadastrar 5
  pessoas (nome, idade e peso) e, após o cadastro, calcule e
  exiba a média de idade e peso das pessoas cadastradas.
*/

#include <stdio.h>
#include <string.h>

struct Pessoa
{
  char nome[50];
  int idade;
  float peso;
};

int main()
{
  struct Pessoa pessoas[5];
  int soma_idade = 0;
  float soma_peso = 0.0;
  int i;

  for (i = 0; i < 5; i++)
  {
    printf("Nome: ");
    fgets(pessoas[i].nome, 50, stdin);
    pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0';

    printf("Idade: ");
    scanf("%d", &pessoas[i].idade);
    soma_idade += pessoas[i].idade;

    printf("Peso: ");
    scanf("%f", &pessoas[i].peso);
    soma_peso += pessoas[i].peso;

    getchar();
  }

  printf("Média de idade: %.2f\n", soma_idade / 5.0);
  printf("Média de peso: %.2f kg\n", soma_peso / 5.0);

  return 0;
}