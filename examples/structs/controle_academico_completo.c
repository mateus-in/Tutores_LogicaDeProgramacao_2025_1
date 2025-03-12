/*
  Faça um sistema básico de controle acadêmico usando structs aninhadas.
  Cada aluno terá nome, matrícula e disciplinas (cada disciplina terá nome, carga horária e média do aluno).
  Cadastre dois alunos, cada um com duas disciplinas.
  Exiba na tela os alunos cadastrados com suas disciplinas e respectivas médias.
*/

#include <stdio.h>
#include <string.h>

struct Disciplina
{
  char nome[50];
  int carga_horaria;
  float media;
};

struct Aluno
{
  char nome[50];
  int matricula;
  struct Disciplina disciplinas[2];
};

int main()
{
  struct Aluno alunos[2];
  int i, j;

  for (i = 0; i < 2; i++)
  {
    printf("Nome do aluno: ");
    fgets(alunos[i].nome, 50, stdin);
    alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

    printf("Matrícula: ");
    scanf("%d", &alunos[i].matricula);
    getchar();

    for (j = 0; j < 2; j++)
    {
      printf("Nome da disciplina %d: ", j + 1);
      fgets(alunos[i].disciplinas[j].nome, 50, stdin);
      alunos[i].disciplinas[j].nome[strcspn(alunos[i].disciplinas[j].nome, "\n")] = '\0';

      printf("Carga horária: ");
      scanf("%d", &alunos[i].disciplinas[j].carga_horaria);

      printf("Média: ");
      scanf("%f", &alunos[i].disciplinas[j].media);
      getchar();
    }
  }

  printf("\nDados dos Alunos:\n");
  for (i = 0; i < 2; i++)
  {
    printf("Aluno: %s (Matrícula %d)\n", alunos[i].nome, alunos[i].matricula);
    for (j = 0; j < 2; j++)
    {
      printf("\tDisciplina: %s | CH: %d | Média: %.2f\n", alunos[i].disciplinas[j].nome, alunos[i].disciplinas[j].carga_horaria, alunos[i].disciplinas[j].media);
    }
  }

  return 0;
}
