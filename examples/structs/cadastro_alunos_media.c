/*
  Crie um sistema simples de cadastro de alunos contendo nome, matrícula
  e três notas. Utilize structs e arrays. Ao final, exiba o nome
  e a média final de cada aluno cadastrado.
*/

#include <stdio.h>
#include <string.h>

struct Aluno
{
  char nome[50];
  int matricula;
  float notas[3];
};

int main()
{
  struct Aluno alunos[3];
  float media;
  int i, j;

  for (i = 0; i < 3; i++)
  {
    printf("Nome do aluno: ");
    fgets(alunos[i].nome, 50, stdin);
    alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

    printf("Matrícula: ");
    scanf("%d", &alunos[i].matricula);

    printf("Notas:\n");
    for (j = 0; j < 3; j++)
    {
      printf("Nota %d: ", j + 1);
      scanf("%f", &alunos[i].notas[j]);
    }
    getchar();
  }

  printf("\nMédias dos Alunos:\n");
  for (i = 0; i < 3; i++)
  {
    media = 0.0;
    for (j = 0; j < 3; j++)
    {
      media += alunos[i].notas[j];
    }
    media /= 3;
    printf("%s (Matrícula %d): Média %.2f\n", alunos[i].nome, alunos[i].matricula, media);
  }

  return 0;
}