#include <stdio.h>
int main() {
    int valor, i, divisores = 0, opcao;


    do{
        do{
            printf("Digite um valor maior que 1: ");
            scanf("%d", &valor);
        }while(valor < 2);

        printf("Divisores de %d: ", valor);
        for(i = 1; i <= valor; i++){
            if(valor % i == 0){
                printf("%d ", i);
                divisores++;
        divisores = 0;
            }
        }

        printf("\n");
        if(divisores > 2)
            printf("%d nao e primo\n", valor);
        else
            printf("%d e primo\n", valor);
        printf("1 - Digitar outro valor\n2 - Sair\n");
        scanf("%d", &opcao);
    }while(opcao != 2);




    return 0;
}
