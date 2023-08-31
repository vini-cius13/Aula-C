#include <stdio.h>

int main(){
    int opcao, programa = 1;
    float deposito, saque, saldo = -1;  
    char nome[30];

    while(programa){
            printf("Escolha a opção desejada:");
            printf("\n 1 - Abrir conta;\n 2 - Depósito;\n 3 - Saque;\n 4 - Saldo;\n 5 - Sair;\n");
            scanf("%d", &opcao);
        if(opcao == 1){
            printf("Informe seu nome: ");
            scanf("%s", nome);
            printf("Digite seu saldo inicial: ");
            scanf("%f", &saldo);
            }
        if(opcao == 2){
            if(saldo >= 0){
                printf("Qual o valor que deseja depositar?\n");
                scanf("%f", &deposito);
                saldo += deposito; // +=: recebe ele mesmo + a variável em seguida
                printf("Saldo atual: R$%.2f\n", saldo);
            } else {
                printf("Crie uma conta!\n");
            }
        }
        if(opcao == 3){
            if(saldo >= 0){
                printf("Qual o valor que deseja sacar?: ");
                scanf("%f", &saque);
                saldo -= saque;
                printf("Saldo atual: R$%.2f\n", saldo);
            } else {
                printf("Crie uma conta!\n");
            }
        }
        if(opcao == 4){
            if(saldo >= 0){
                printf("Seu saldo é de: R$%.2f\n", saldo);
            } else {
            printf("Crie uma conta!\n");
            }
        }
        if(opcao == 5){
            programa = 0;
        }
    }
}