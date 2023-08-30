#include <stdio.h>

int main(){
    int numero, quadrado, cubo;
    printf("Digite um número: ");
    scanf("%d", &numero);
    quadrado = numero * numero;
    cubo = numero * quadrado;
    printf("O quadrado de %d é: %d, e o seu cubo é: %d", numero, quadrado, cubo);
}