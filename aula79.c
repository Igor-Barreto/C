#include <stdio.h>
int main() {
    int i, valor_inicial = 1, valor_final = 1;

    for(i = 1; i <= 29; i++){
        valor_inicial = valor_inicial * 2;
        valor_final += valor_inicial;
}
    printf("Valor em centavos: %d\n", valor_final);
    printf("R$%.2f\n\n", valor_final/100.0);
    return 0;
}
