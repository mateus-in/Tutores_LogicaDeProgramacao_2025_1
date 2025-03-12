/*
  Crie uma struct chamada Aluno que tenha nome, idade e média.
  Declare uma variável desse tipo, inicialize os valores e exiba-os na tela.
*/

#include <stdio.h>
#include <string.h>

struct Aluno
{
  char nome[50];
  int idade;
  float media;
};

int main()
{
  struct Aluno aluno;

  strcpy(aluno.nome, "Maria Clara");
  aluno.idade = 19;
  aluno.media = 8.5;

  printf("Aluno: %s\nIdade: %d\nMédia: %.2f\n", aluno.nome, aluno.idade, aluno.media);
  return 0;
}