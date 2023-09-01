#include <stdio.h>

int main(){
    int operacao;
    printf("Qual a operação desejada?\n ");
    printf("1- Soma;\n 2-Subtração\n 3-Multiplicação\n 4-Divisão\n 5-Média Ponderada\n");
    scanf("%d", &operacao);
    if(operacao == 5){
        int quantos, somaPeso;
        float mediaPond, media, numeroPeso[quantos - 1], peso[quantos - 1], valores[quantos - 1] ;

        printf("Quantos números terá a operação?: ");
        scanf("%d", &quantos);
        for (int i = 0; i < quantos; i++){
            printf("Digite o %d número?: ", i + 1);
            scanf("%f", &valores[i]);
            printf("Digite o peso do %d numero: ", i + 1);
            scanf("%f", &peso[i]);
        }
        for (int i = 0; i < quantos; i++){
            numeroPeso[i] = valores[i] * peso[i];
            media += numeroPeso[i];
            somaPeso += peso[i];
            printf("%f\n", numeroPeso[i]);
        }
        mediaPond = media / somaPeso;
        printf("A média ponderada dos valores dados é: %.2f\n", mediaPond);
    }
}