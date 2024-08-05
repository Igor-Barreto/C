#include <stdio.h>
int main () {
    float nota1, nota2, nota3;
    char escolha;

    printf("Escolha qual media deseja:\na - aritmetica\np - ponderada\n ");
    scanf("%c", &escolha);

    printf("Digite as tres notas: ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);

    if(escolha == 'a' || escolha == 'A') {
        printf("Media aritmetica: %.2f\n", (nota1 + nota2 + nota3) / 3);
    }else{
        if (escolha == 'p' || escolha == 'P')
            printf("media ponderada: %.2f\n", (nota1 * 3 + nota2 * 3 + nota3 * 4) / 10);
        else
            printf("Opcao invalida!!\n");
    }

    return 0;
}
