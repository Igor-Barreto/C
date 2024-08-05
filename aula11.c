#include <stdio.h>
int main(){
    char sexo;
    int idade;
    float peso, altura;

    printf("Digite o seu sexo (f, F, m ou M): ");
    scanf("%c",&sexo);
    printf("Digite a sua idade: ");
    scanf("%d",&idade);
    printf("Digite o seu peso: ");
    scanf("%f",&peso);
    printf("Digite a sua altura: ");
    scanf("%f",&altura);

    printf("Seus dados sao:\nSexo: %c\nIdade:%d\nPeso:%.1f\nAltura:%.2f\n",sexo,idade,peso,altura);

    return 0;
}
