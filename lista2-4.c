#include <stdio.h>
int main() {

    int opcao;
    float dolar, real;

    printf("\n1- Converter real em dolar\n2- Converter dolar em real\n");
    scanf("%d", &opcao);

    if(opcao == 1){
        printf("Digite quantos reais voce quer converter em dolar \n");
        scanf("%f", &real);
        dolar = real / 5.30;
        printf("R$%.2f vira $%.2f\n",real ,dolar);
    }
    else if(opcao == 2){
        printf("Digite quantos dolares voce quer converter em reais \n");
        scanf("%f", &dolar);
        real = dolar * 5.30;
        printf("$%.2f vira R$%.2f\n",dolar ,real);
    }
    else
        printf("opcao invalida!\n");

    return 0;
}
