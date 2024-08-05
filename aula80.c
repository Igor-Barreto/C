#include <stdio.h>
int main() {
    float massa;
    int tempo = 0;

    printf("Digite a massa do material em gramas: ");
    scanf("%f", &massa);

    while(massa >= 0.05) {
        massa = massa / 2;
        tempo += 50;
    }

    printf("O tempo decorrido foi de %d segundos. \n", tempo);
    printf("Massa final: %.2f\n", massa);


    return 0;
}
