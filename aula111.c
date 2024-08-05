#include <stdio.h>
int main(){
    int i, vet1[10], vet2[10];
    for(i = 0; i < 10; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vet1[i]);
    }
    for(i = 0; i < 10; i++)
        vet2[i] = vet1[i] * vet1[i];

    printf("Vetor 1: ");
    for(i = 0; i < 10; i++)
        printf("%d ", vet1[i]);

    printf("\n");
    printf("Vetor 2: ");
    for(i = 0; i < 10; i++)
        printf("%d ", vet2[i]);

    return 0;
}

