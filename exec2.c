#include <stdio.h>
int main() {
    int a, b;

    printf("Digite dois valores inteiros: ");
    scanf("%d\n%d",&a ,&b);
    printf("Valores lidos: %d e %d\n",a, b);

    a = b, b = a;
    printf("Valores lidos: %d e %d\n",a, b);

    return 0;
}
