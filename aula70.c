#include <stdio.h>
int main () {
    int num, multiplicacao, res;

    printf("Digite um numero para saber sua tabuada: ");
    scanf("%d", &num);

    while(multiplicacao < 10) {
       res = num * ++multiplicacao;
       printf("%d x %d = %d\n", num, multiplicacao, res);

    }

    return 0;
}
