/*
    Faça um programa em C que leia duas notas (valores reais), calcule a média
    e verifique a situação do aluno:
        - Se a média >= 7, exibir “Aprovado”.
        - Se a média >= 5 e < 7, exibir “Recuperação”.
        - Caso contrário, exibir “Reprovado”.
*/

#include <stdio.h>

int main()
{
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 7.0)
    {
        printf("Aprovado\n");
    }
    else if (media >= 5.0)
    {
        printf("Recuperacao\n");
    }
    else
    {
        printf("Reprovado\n");
    }

    return 0;
}