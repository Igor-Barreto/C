#include <stdio.h>
#include <stdlib.h>
int main() {

    int i, j, mat9[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    //char mat5[3][4]= {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'};


    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um valor %d %d:", i, j);
            scanf("%2d", &mat9[i][j]);
        }
    }


    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf("%d ", mat9[i][j]);
        printf("\n");
    }
    return 0;
}
