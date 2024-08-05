#include <stdio.h>
int main() {
    int num1, num2, num3;

    printf("Digite tres valores: \n");
    scanf("%d\n%d\n%d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3) {
        printf("\nO maior numero e %d\n", num1);
        if (num2 < num3)
            printf("\nO menor numero e %d\n", num2);
        else
            printf("\nO menor numero e %d\n", num3);
    }else if(num2 > num1 && num2 >num3) {
        printf("\nO maior numero e %d\n", num2);
        if (num1 < num3)
            printf("\nO menor numero e %d\n", num1);
        else
            printf("\nO menor numero e %d\n", num3);
    }else{
        printf("\nO maior numero e %d\n", num3);
        if (num2 > num1)
            printf("\nO menor numero e %d\n", num1);
        else
            printf("\nO menor numero e %d\n", num2);
    }

    return 0;
}
