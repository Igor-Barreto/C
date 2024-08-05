#include <stdio.h>

//Lendo numeros inteiros!

int main(){
    int valor, valor2; //variavel criada do tipo inteiro

    valor = 50; // valor recebe 50

    printf("Digite um valor inteiro: \n");
    scanf("%d", &valor);

    printf("Digite um segundo valor inteiro: \n");
    scanf("%d", &valor2);

    printf("\n\nPrimeiro valor: %d\nSegundo valor: %d\n\n",valor, valor2);

    return 0;
}
