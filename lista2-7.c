#include <stdio.h>
int main() {
    char letra;

    printf("Digite um caracter: ");
    scanf("%c", &letra);

    if(letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U')
        printf("Vogal\n");
    else
        printf("Consoante\n");

    return 0;
}
