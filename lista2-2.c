#include <stdio.h>
int main() {
    int n1, n2, n3, n4, n5, pos = 0, neg = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &n2);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &n3);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &n4);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &n5);
    if (n1 > 0)
        pos += 1;
    else
        neg += 1;

    if (n2 > 0)
        pos += 1;
    else
        neg += 1;

    if (n3 > 0)
        pos += 1;
    else
        neg += 1;

    if (n4 > 0)
        pos += 1;
    else
        neg += 1;

    if (n5 > 0)
        pos += 1;
    else
        neg += 1;

    printf("Numeros positivos: %d\nNumeros negativos: %d\n", pos, neg);

    return 0;
}
