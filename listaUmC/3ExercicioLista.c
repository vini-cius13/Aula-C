#include <stdio.h>

int main(){
    double area;
    float base, altura;

    printf("Digite o tamanho da base do triângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);
    area = (base * altura) / 2;
    printf("A área do triângulo é: %.2lf\n ", area);
}