#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int i, j, soma = 0, mat[5] [7];

    srand(time(NULL));

    for(i = 0; i < 5; i++){
        for(j = 0; j < 7; j++){
            mat[i][j] = rand() % 100;
        }
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 7; j++){
            soma += mat[i][j];
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n\nSoma total: %d\n\n", soma);

    return 0;
}