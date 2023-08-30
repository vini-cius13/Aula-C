#include <stdio.h>

int main(){
    int ano;
    printf("Digite o ano desejado:");
    scanf("%d", &ano);
    if(ano % 4 == 0){
        printf("O ano é bissexto");
    } else {
        printf("O ano não é bissexto");
    }
}