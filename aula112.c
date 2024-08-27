#include <stdio.h>
#include <stdlib.h>
#include <time.h> //pega a hora do computador para sortear numeros aleatorios

int main () {

    int i, vet1[25], vet2[25], vet3[25];

    srand(time(NULL)); //usado para sortear os numeros

    for(i = 0; i < 25; i++){
        vet1[i] = rand() % 100; //sorteando numeros para o vetor1
        vet2[i] = rand() % 100; //% 100 para sortear numeros de 0 a 99
    }
    for(i = 0; i < 25; i++){
        vet3[i] = vet1[i] + vet2[i];
    }
    printf("\nVetor 1: ");
    for(i = 0;i < 25; i++){
        printf("%3d ", vet1[i]);
    }
    printf("\nVetor 2: ");
    for(i = 0;i < 25; i++){
        printf("%3d ", vet2[i]);
    }
    printf("\nVetor 3: ");
    for(i = 0;i < 25; i++){
        printf("%3d ", vet3[i]);
    }


    return 0;
}
