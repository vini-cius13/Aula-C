#include <stdio.h>

int main(){
    char nome[40], celular[15];
    int idade;
    printf("Escreva seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu número de celular (sem espaços): ");
    scanf("%s", celular);
    printf("Seu nome é: %s, sua idade é: %d, e seu número de celular é: %s\n", nome, idade, celular);
}
   