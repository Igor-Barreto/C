#include <stdio.h>
int main () {
    int a;
    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    if(a < 0)
        printf("\nNumero negativo!\n");

    else if (a > 0)
        printf("\nNumero positivo!\n");

    else
        printf("\n Numero igual a zero!\n");
    return 0;
}
