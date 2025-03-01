/*
  Implemente um sistema que peca ao usuario uma senha numerica (inteira).
  Enquanto a senha estiver incorreta, o programa deve pedir novamente.
  Use do-while para garantir que ao menos uma leitura sera feita.
  Quando a senha estiver correta (ex: 1234), exiba "Acesso liberado".
*/

#include <stdio.h>

int main() {
    int senha;

    // Exemplo: senha correta = 1234
    const int SENHA_CORRETA = 1234;

    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha != SENHA_CORRETA) {
            printf("Senha incorreta. Tente novamente.\n");
        }
    } while (senha != SENHA_CORRETA);

    printf("Acesso liberado.\n");

    return 0;
}