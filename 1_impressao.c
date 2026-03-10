#include <stdio.h>

int main() {
    int N; 
    int A = 1;
    
    printf("Escolha o numero: ");
    scanf("%d", &N);
    
    while (A <=  N) {
        printf("%d\n", A);
        A++;
    }
    
    return 0;
}
