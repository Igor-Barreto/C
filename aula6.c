#include <stdio.h>
int main(){
    char sexo = 'k';

    printf("Valor da variavel sexo: %c\n", sexo);

    printf("Digite o seu sexo: (f, F, m ou M)");
    scanf("%c",&sexo);

    printf("Valor da variavel sexo: %c\n", sexo);



    return 0;
}
