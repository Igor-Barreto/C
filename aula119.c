#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, j, soma, sColuna[10], sLinha[5], mat[5][10];

    srand(time(NULL));

    for(i = 0; i < 5; i++){
        for(j = 0; j < 10; j++){
            mat[i][j] = rand() % 100;
        }
    }

    //letra a, soma das linhas
    for(i = 0; i < 5; i++){
        soma = 0;
        for(j = 0; j < 10; j++){
            soma += mat[i][j];
        }
        sLinha[i] = soma;
    }
    // letra b, soma das colunas
    for(j = 0; j < 10; j++){
        soma = 0;
        for(i = 0; i < 5; i++){
            soma += mat[i][j];
        }
        sColuna[j] = soma;
    }
    //letra c, imprimindo as estruturas
    printf("\nMatriz:\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 10; j++){
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\nVetor com a soma das linhas:\n");
    for(i = 0; i < 5; i++){
        printf("Linha %d: %d\n", i, sLinha[i]);
    }

    printf("\n\nVetor com a soma das colunas:\n");
    for(j = 0; j < 10; j++){
        printf("Coluna %d: %d\n", j, sColuna[j]);
    }
    return 0;
}