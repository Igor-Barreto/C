#include <stdio.h>
int main() {
    int num;

    printf("Digite um valor para saber se e divisivel por 2, 3 ou 5!\n");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d e divisivel por 2!\n", num);
    else if (num % 3 == 0)
        printf("%d e divisivel por 3!\n", num);
    else if (num % 5 == 0)
        printf("%d e divisivel por 5!\n", num);
    else
        printf("%d nao e divisil por nenhum deles!\n", num);

    return 0;
}
