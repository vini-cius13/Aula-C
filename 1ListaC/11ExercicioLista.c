#include <stdio.h>

int main(){
    int chute, chances, resposta = 3;

    printf("Jogo de Adivinhação\n");
    printf("Quantas chances você quer ter?\n");
    scanf("%d", &chances);
    
    while(chances > 0){
        printf("Escolha seu chute: ");
        scanf("%d", &chute);
        if(chute > resposta){
            printf("O número é menor\n");
        } else if(chute < resposta){
            printf("O número é maior\n");
        } else {
            printf("Você acertou!\n");
            chances = 0;
        }
        chances--;
    }
    printf("Fim do jogo.");
}