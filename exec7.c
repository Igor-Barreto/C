#include <stdio.h>
int main() {
    int segundos, h, m, s, resto;
    printf("Digite um valor em segundos: \n");
    scanf("%d", &segundos);
    h = segundos / 3600;
    resto = segundos % 3600;
    m = resto / 60;
    s = resto % 60;
    printf("%d:%d:%d\n", h, m, s);


    return 0;
}
