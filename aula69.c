#include <stdio.h>
int main() {
    int i = 0;

    do{
        printf("Digite um valor maior que zero: ");
        scanf("%d", &i);
    }while(i <= 0);

    printf("Valor lido: %d\n\n", i);


    return 0;
}
/*int main() {
    int i = 0;
    printf("Gerado com for: \n");
    for(i = 0; i <= 10; i++)
        printf("%d ", i);

    i = 0;
    printf("\nGerado com while: \n");
    while(i <= 10) {
        printf("%d ", i++);
    }

    return 0;
}
*/
