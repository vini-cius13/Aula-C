#include <stdio.h>

int main(){
    int numero, multiplicador = 1, resultado;

    printf("Digite um número: ");
    scanf("%d", &numero);
    while(multiplicador <= 10){
        resultado = numero * multiplicador;
        printf("%d x %d = %d\n", numero, multiplicador, resultado);
        multiplicador++;
    }
}