#include <stdio.h>

int main(){
    float numero = 3.1415;

    printf("Valor da minha variavel: %.2f\n", numero);
    printf("Digite um numero real: ");
    scanf("%f", &numero);

    printf("Valor lido: %.2f", numero);


    return 0;
}
