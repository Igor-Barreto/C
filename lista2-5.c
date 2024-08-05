#include <stdio.h>
int main() {
    float peso = 0, altura = 0, imc = 0;
    printf("Digite seu peso(kg) e sua altura(m): \n");
    scanf("%f\n%f", &peso, &altura);

    imc = peso / (altura * altura);

    if(imc < 18.5)
        printf("Abaixo do peso\n");

    else if(imc >= 18.5 && imc < 25)
        printf("Peso normal\n");

    else if(imc >= 25 && imc < 30)
        printf("Sobrepeso\n");

    else if(imc >= 30 && imc < 35)
        printf("Obesidade grau 1\n");

    else if (imc >= 35 && imc < 40)
        printf("Obesidade grau 2\n");

    else
        printf("obesidade grau 3\n");

    return 0;
}
