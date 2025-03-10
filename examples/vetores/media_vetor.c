/*
  Faça um programa que leia 6 notas de um aluno, armazene-as em um vetor e calcule a média das notas.
*/

#include <stdio.h>

int main()
{
  float notas[6], soma = 0, media;

  // Entrada de dados
  for (int i = 0; i < 6; i++)
  {
    printf("Digite a nota %d: ", i + 1);
    scanf("%f", &notas[i]);
  }

  // Processamento: cálculo da média
  for (int i = 0; i < 6; i++)
  {
    soma += notas[i];
  }
  media = soma / 6;

  // Saída
  printf("Média do aluno: %.2f\n", media);

  return 0;
}