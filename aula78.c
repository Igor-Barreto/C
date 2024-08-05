#include <stdio.h>
int main() {
    int i, n, a = 0;

    do{
        printf("Digite o valor de n: ");
        scanf("%d", &n);
    }while(n < 1);

    for(i =1; i <= n; i++)
        a= a +i;

    printf("Soma de 1 ate %d: %d\n\n", n, a);


    return 0;
}
