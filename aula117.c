#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, j, copia, vetor[100];

    srand(time(NULL));

    for(i = 0; i < 100; i++){
        vetor[i] = rand() % 1000;
    }
    printf("\nAntes da ordenação:\n");
    for(i = 0; i <100; i++){
        printf("%3d ", vetor[i]);
    }

    for(j = 1; j <=100; j++)
        for(i = 0; i < 99; i++){
            if(vetor[i] > vetor[i+1]){
                copia = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = copia;
            }
    }
    printf("\n");
    printf("\nAntes da ordenacao:\n");
    for(i = 0; i <100; i++){
        printf("%3d ", vetor[i]);
    }    
    return 0;
}