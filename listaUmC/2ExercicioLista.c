#include <stdio.h>

int main(){
    float temperaturaCelsius, temperaturaFahrenheit;
    
    printf("Digite a temperatura em Celsius para a conversão: ");
    scanf("%f", &temperaturaCelsius);
    temperaturaFahrenheit = (temperaturaCelsius * 1.8) + 32;
    printf("A temperatura em Fahrenheit é: %.1f", temperaturaFahrenheit);
}