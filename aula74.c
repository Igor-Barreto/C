#include <stdio.h>
int main() {
    float nota1, nota2, media = 0;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    while(nota1 < 0 || nota1 > 10) {
        printf("Nota invalida! Tente novamente: ");
        scanf("%f", &nota1);
    }

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    while(nota2 < 0 || nota2 > 10) {
        printf("Nota invalida! Tente novamente: ");
        scanf("%f", &nota2);
    }
    media = (nota1 + nota2) / 2;
    printf("Media semestral: %.2f\n", media);

    return 0;
}
