#include <stdio.h>
int main() {
    int i, idade, idade_baixo = 0, qt_idade_baixo = 0, qt20 = 0;
    float idade_media, altura_media, altura, altura20 = 0;

    for(i = 1; i <= 4; i++) {
        printf("Digite sua idade e sua altura em metros: ");
        scanf("%d%f", &idade, &altura);
    }
        // solucao letra a
        if(altura < 1.7) {
            idade_baixo += idade;
            qt_idade_baixo++;
        }

        //solucao letra b
        if(idade > 20) {
            altura20 += altura;
            qt20++;
        }

    idade_media = idade_baixo / qt_idade_baixo;
    altura_media = altura20 / qt20;

    printf("Idade media dos alunos com menos de 1.70 de altura: %.2f\n", idade_media);
    printf("Altura media dos alunos com mais de 20 anos: %.2f\n", altura_media);

    return 0;
}
