#include <stdio.h>
int main() {
    int i, n, num, par = 0, impar = 0;

    printf("Digite quantos numeros quer adicionar (1 a 10): ");
    scanf("%d", &n);

    while(n < 1 || n >10)
        printf("Tente um valor dentro desse intervalo(1 a 10): ");

    for(i = 0; i < n; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num);

        if(num % 2 == 0)
            par++;
        else
            impar++;
    }

    printf("Numeros pares: %d\n", par);
    printf("Numeros impares: %d\n", impar);




    return 0;
}
