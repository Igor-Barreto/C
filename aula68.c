#include <stdio.h>
int main() {
    int valor, valor2;

    printf("Digite um valor menor que zero: ");
    scanf("%d", &valor);

    while(valor >= 0){
        printf("Valor invalido! Digite um valor menor que zero: ");
        scanf("%d", &valor);
    }
    printf("Valor lido: %d\n", valor);

    do{
        printf("Digite um valor menor que zero: ");
        scanf("%d", &valor2);
    }while(valor2 >= 0);

    printf("Valor lido: %d\n\n", valor2);

    return 0;
}
