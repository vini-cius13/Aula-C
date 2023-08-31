#include <stdio.h>

int teste(int n);
int n;

int main() {
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Fibonacci(%d) = %d\n", n, teste(n));
    
    return 0;
}
int teste(int n) {
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    
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