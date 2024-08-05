#include <stdio.h>
int main () {
    int i, n;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i+= 2)
        printf("%d ", i * i);

    return 0;
}
