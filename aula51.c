#include <stdio.h>
int main() {

    char opcao;
    printf("\na - cadastrar produto\nb - vender produto\nc - buscar produto\nd - imprimir relatorio\nz - sair\n");
    scanf("%c", &opcao);

    switch(opcao) {
        case 'a':
            printf("\nCadastrando um novo produto...\n");
            break;
        case 'b':
            printf("\nVendendo produto...\n");
            break;
        case 'c':
            printf("\nBuscando outro produto...\n");
            break;
        case 'd':
            printf("\nImprimindo relatorio...\n");
            break;
        case 'z':
            printf("\nDesligando maquina...\n");
            break;
        default:
            printf("\nOpcao invalida!\n");
    }

    return 0;
}
