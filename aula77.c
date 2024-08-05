#include <stdio.h>
int main() {
    int opcao, num1, num2;


    do{
        printf("Escolha uma das opcoes abaixo:\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n0 - Sair\n");
        scanf("%d", &opcao);

        if(opcao > 0 && opcao <5) {
            printf("Digite dois valores: ");
            scanf("%d%d", &num1, &num2);
        }

        switch(opcao){
        case 0:
            printf("Saindo...\n");
            break;

        case 1:
            printf("Soma: %d\n", num1 + num2);
            break;

        case 2:
            printf("Subtracao: %d\n", num1 - num2);
            break;

        case 3:
            printf("Multiplicacao: %d\n", num1 * num2);
            break;

        case 4:
            while(num2 == 0) {
                printf("Nao existe divisao por zero!\nDigite outro valor: ");
                scanf("%d", &num2);
            }
            printf("Divisao: %d\n", num1 / num2);
            break;

        default:
            printf("Opcao invalida!!");
        }
    }while(opcao != 0);

    return 0;
}
