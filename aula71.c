#include <stdio.h>
int main() {
    int senha = 123456;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    while(senha != 123456){
        printf("Senha invalida! Tente novemente: ");
        scanf("%d", &senha);
    }
    printf("Acesso permitido!\n");

    return 0;
}
