#include <stdio.h>
int main() {
    int i, a, b, r = 0;

    printf("Digite dois valores: ");
    scanf("%d%d", &a, &b);


    for(i = 1; i <= a; i++)
        r += b;

    printf("%d * %d = %d\n", a, b, r);


    return 0;
}
