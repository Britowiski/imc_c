#include <stdio.h>


int main(void) {
    char nome[12];
    float peso = 0.0;
    float altura = 0.0;
    
    float divisao;
    float imc;
    
    printf("Digite o seu nome: \n");
    scanf("%s", &nome);
    
    printf("Digite o seu peso: \n");
    scanf("%f", &peso);
    
    printf("Digite a sua altura: \n");
    scanf("%f", &altura);
    
    divisao = (float)peso/(altura*altura);
    imc = divisao;
    
    printf("O seu nome é %s, você pesa %.2fkg, e sua altura é %.2f\n", nome,peso,altura);
    printf("O seu IMC é de: %.2f ", imc);
    
    
}
