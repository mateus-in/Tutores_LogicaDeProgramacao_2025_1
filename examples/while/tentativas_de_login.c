/*
  Implemente um programa que simule tentativas de login.
  O usuário deve digitar um codigo inteiro (senha). Enquanto a senha estiver
  incorreta (por exemplo, 2025), o programa solicita novamente. Se estiver correta,
  exibe "Acesso concedido" e encerra. Use while para repetir as tentativas.
*/

#include <stdio.h>

int main()
{
  int senha;
  const int SENHA_CORRETA = 2025;

  printf("Digite a senha numerica: ");
  scanf("%d", &senha);

  while (senha != SENHA_CORRETA)
  {
    printf("Senha incorreta. Tente novamente: ");
    scanf("%d", &senha);
  }

  printf("Acesso concedido.\n");

  return 0;
}