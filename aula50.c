#include <stdio.h>
int main() {

    int opcao;
    printf("\n1 - cadastrar produto\n2 - vender produto\n3 - buscar produto\n4 - imprimir relatorio\n5 - sair\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("\nCadastrando um novo produto...\n");
            break;
        case 2:
            printf("\nVendendo produto...\n");
            break;
        case 3:
            printf("\nBuscando outro produto...\n");
            break;
        case 4:
            printf("\nIMprimindo relatorio...\n");
            break;
        case 5:
            printf("\nDesligando maquina...\n");
            break;
        default:
            printf("\nOpcao invalida!\n");
    }

    return 0;
}
