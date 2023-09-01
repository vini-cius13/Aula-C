#include <stdio.h>

int fibo(int n);
int n;

int main() {
    
    printf("Digite a posição desejada: ");
    scanf("%d", &n);
    
    printf("Fibonacci(%d) = %d\n", n, fibo(n));
    
    return 0;
}
int fibo(int n) {
    if(n <= 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    int prev = 0;
    int current = 1;
    int next;
    
    for (int i = 2; i <= n; ++i) {
        next = prev + current;
        prev = current;
        current = next;
    }
    return current;
}