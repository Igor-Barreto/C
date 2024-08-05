#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

    int i, j, mat9[3][3] = {{11,12,13},{14,15,16},{17,18,19}};
    //char mat5[3][4]= {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'};
    srand(time(NULL));


    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            mat9[i][j] = rand();
        }
    }


    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf("%5d ", mat9[i][j]);
        printf("\n");
    }
    return 0;
}
