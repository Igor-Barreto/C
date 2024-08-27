#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, maisVendido = 0 , quant[10];
    float valorTotal = 0, valorParcial, valor[10];

    for(i = 0; i < 10; i++){
        printf("Digite valor unitario e quantida vendida: ");
        scanf("%f%d",&valor[i], &quant[i]);
    }
    // resolvendo letra a...
    for(i = 0; i < 10; i++){
        valorParcial = quant[i] * valor[i];
        printf("vendido: %d\tValor unitario R$%.2f\tValor total R$%.2f\n", quant[i], valor[i], valorParcial);
        valorTotal += valorParcial;
    }
    printf("Valor total das vendas R$%.2f\n", valorTotal);
    printf("Comissao paga ao vendedor R$%.2f\n", valorTotal * 0.05);

    // resolvendo letra b...
    for(i = 0; i < 10; i++){
        if(quant[i] > maisVendido)
            maisVendido = quant[i];
    }

    for(i = 0; i < 10; i++){
        if (quant[i] == maisVendido){
            printf("Posicao: %d\tValor R$%.2f\n", i, valor[i]);
        }
    }

    return 0;
}
