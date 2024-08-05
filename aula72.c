#include <stdio.h>
int main () {
    int i, soma = 0;

    for (i = 1; i <=1000; i++)
        if(i % 2 == 1)
            soma += i;
    printf("A soma dos numeros impares entre 1 e 1000: %d\n", soma);



    return 0;
}
