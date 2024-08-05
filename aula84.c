#include <stdio.h>
int main() {
    int qt, i;
    float salario, total_salario = 0, salario_maior = 0, salario_menor = 99999;

    do{
        printf("Quantos funcionarios a empresa possui: ");
        scanf("%d", &qt);
    }while(qt < 0);

    for(i = 1; i <= qt; i++){
        printf("%d salario: ", i);
        scanf("%f", &salario);

        total_salario += salario;
        if(salario_menor > salario)
            salario_menor = salario;
        if(salario_maior < salario)
            salario_maior = salario;
    }
    printf("Salario medio R$%.2f\n", total_salario / qt);
    printf("Maior salario: R$%.2f\n", salario_maior);
    printf("Menor salario R$%.2f\n", salario_menor);

    return 0;
}
