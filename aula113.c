#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, vet1[20], fim = 19, copia;

    for(i = 0; i < 20; i++){
        printf("Digite %d: ", i);
        scanf("%d", &vet1[i]);
    }


    printf("\nVetor original: ");
    for(i = 0; i < 20; i++)
        printf("%2d ", vet1[i]);


    for (i = 0; i < 10; i++){
        copia = vet1[i];
        vet1[i] = vet1[fim];
        vet1[fim] = copia;
        fim--;
    }
    printf("\nVetor modificado: ");
    for(i = 0; i < 20; i++)
        printf("%2d ", vet1[i]);


    return 0;
}
