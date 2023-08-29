#include <stdio.h>

int main(){
    char nome[20];
    int idade;
    printf("Escreva seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Seu nome é %s, e você tem %d anos\n", nome, idade);
}