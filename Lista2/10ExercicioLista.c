#include <stdio.h>

int main(){
    int valor, fatorial = 1;
    printf("Digite um valor: ");
    scanf("%d", &valor);

    int i = valor;
    while(i > 0){
        fatorial = fatorial * valor;
        valor--;
        i--;
    }
    printf("O fatorial é: %d\n", fatorial);
}