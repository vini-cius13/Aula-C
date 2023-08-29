#include <stdio.h>

float saldo;
char nome[30]

void abrirConta();
float deposito();
float saque();
void mostrarSaldo();
void sair();

int main(){
    int operacao;
    printf("Escolha a opção desejada:\n");
    printf("1 - Abrir conta\n 2 - Depósito\n 3 - Saque\n 4 - Saldo\n 5 - Sair\n");
    scanf("%d", &opcao);
    if(opcao = 1){
        int abrirConta();
    } else if(opcao == 2){
        int deposito();
    } else if(opcao == 3){
        int saque();
    } else if(opcao == 4){
        int saldo();
    } else if(opcao == 5){
        int sair();
    } else {
        printf("Erro");
    }
}

int abrirConta(){
    printf("Informe seu nome: ");
    scanf("%s", nome);
    printf("Digite seu saldo inicial: ");
    scanf("%f", &saldo);
}
int deposito(){
    float deposito

    printf("Saldo atual: %d", saldo);
    printf("Qual o valor que deseja depositar?");
    scanf("%f", deposito);
    saldo += deposito // +=: recebe ele mesmo + a variável em seguida
}