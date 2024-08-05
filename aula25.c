#include <stdio.h>
int main() {

    int a = 10, b = 2;
    float pi = 4.1415

    a = (int)pi;

    printf("Valor de a: %d\n", a);
    printf("\nSoma: %d\n", a + b);
    printf("\nSubtracao: %d\n", a - b);
    printf("\nMultiplicacao: %d\n", a * b);
    printf("\nDivisao por inteiros: %d\n",a / b);
    printf("\nDivisao: %.2f\n", (float)a / (float)b);

    return 0;
}
