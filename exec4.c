#include <stdio.h>
int main() {

    int pessoa;
    float despesa, gorjeta, valor_total, valor_pessoa;

    printf("Digite para quantas pessoas quer dividir a conta, a despesa e a gorjeta: \n");
    scanf("%d\n%f\n%f", &pessoa, &despesa, &gorjeta);
    valor_total = despesa * (gorjeta/100) + despesa;
    valor_pessoa = valor_total / pessoa;

    printf("Valor a pagar por pessoa R$%2.f\n",valor_pessoa);

    return 0;
}
