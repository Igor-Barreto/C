#include <stdio.h>
int main() {
    float real, dolar;
    printf("digite quantos reais voce quer converter em dolar: \n");
    scanf("%f", &real);
    dolar = real / 5.30;
    printf("O valor em R$%.2f convertido em $%.2f\n", real, dolar);


    return 0;
}
