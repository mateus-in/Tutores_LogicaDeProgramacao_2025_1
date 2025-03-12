/*
  Crie structs aninhadas para representar um funcionário e
  seu endereço completo (rua, número e cidade).
  Permita ao usuário cadastrar esses dados e depois exiba-os na tela.
*/

#include <stdio.h>
#include <string.h>

struct Endereco
{
  char rua[50];
  int numero;
  char cidade[50];
};

struct Funcionario
{
  char nome[50];
  struct Endereco endereco;
};

int main()
{
  struct Funcionario func;

  printf("Nome do funcionário: ");
  fgets(func.nome, 50, stdin);
  func.nome[strcspn(func.nome, "\n")] = '\0';

  printf("Rua: ");
  fgets(func.endereco.rua, 50, stdin);
  func.endereco.rua[strcspn(func.endereco.rua, "\n")] = '\0';

  printf("Número: ");
  scanf("%d", &func.endereco.numero);
  getchar();

  printf("Cidade: ");
  fgets(func.endereco.cidade, 50, stdin);
  func.endereco.cidade[strcspn(func.endereco.cidade, "\n")] = '\0';

  printf("\nFuncionário: %s\nEndereço: %s, nº %d, %s\n",
         func.nome, func.endereco.rua, func.endereco.numero, func.endereco.cidade);

  return 0;
}
