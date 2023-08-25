#include <stdio.h>

int main(){
    int bovinos, bovinosFinal, quantAnos = 0;
    printf("Escreva a quantidade de bovinos inicial: ");
    scanf("%d", &bovinos);
    printf("Escreva a quantidade de bovinos desejada para o final do projeto: ");
    scanf("%d", &bovinosFinal);
    while(bovinos < bovinosFinal){
        quantAnos++;
        bovinos = bovinos + (bovinos / 3) - (bovinos / 4);
    }
    printf("A quantidade de anos necessária para conseguir %d bovinos é: %d\n", bovinosFinal, quantAnos);
}