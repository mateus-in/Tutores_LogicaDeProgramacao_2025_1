/*
  Crie uma struct Produto com nome, preço e quantidade em estoque.
  Em seguida, declare um vetor de 3 produtos, preencha os valores e
  exiba-os utilizando um laço.
*/

#include <stdio.h>
#include <string.h>

struct Produto
{
  char nome[50];
  float preco;
  int quantidade;
};

int main()
{
  struct Produto produtos[3];
  int i;

  for (i = 0; i < 3; i++)
  {
    printf("Nome do produto: ");
    fgets(produtos[i].nome, 50, stdin);
    produtos[i].nome[strcspn(produtos[i].nome, "\n")] = '\0';

    printf("Preço: ");
    scanf("%f", &produtos[i].preco);

    printf("Quantidade em estoque: ");
    scanf("%d", &produtos[i].quantidade);

    getchar();
  }

  printf("\nProdutos cadastrados:\n");
  for (i = 0; i < 3; i++)
  {
    printf("Produto: %s | Preço: R$ %.2f | Estoque: %d\n", produtos[i].nome, produtos[i].preco, produtos[i].quantidade);
  }

  return 0;
}