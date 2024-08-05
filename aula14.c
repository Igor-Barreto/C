#include <stdio.h>

int main(){
    char a, b;

    printf("Digite uma letra: ");
    scanf("%c", &a);

    //Posso colocar um scanf vazio para tirar o espaco do teclado, desta forma: (Nao funcionou no linux)
    //scanf("%c");

    printf("Digite uma letra: ");
    scanf(" %c", &b);


    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);

    return 0;
}
