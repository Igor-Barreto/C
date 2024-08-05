#include <stdio.h>
int main() {
    int valor;

    printf("Digite um valor menor que zero: ");
    scanf("%d", &valor);

    while(valor >= 0){
        printf("Valor invalido! Digite um valor menor que zero: ");
        scanf("%d", &valor);
    }
    printf("Valor lido: %d\n", valor);

    return 0;
}
