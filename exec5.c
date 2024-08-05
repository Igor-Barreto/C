#include <stdio.h>
int main() {
    float dias, despesa, desconto, despesa_final;

    printf("Digite o numero de dias que o pedreiro vai trabalhar: \n");
    scanf("%f", &dias);
    despesa = dias * 45;
    desconto = despesa * 8/100;
    despesa_final = despesa - desconto;
    printf("O valor total a receber: R$%.2f\nValor apos imposto aplicado: R$%.2f\n",despesa, despesa_final);

    return 0;
}
