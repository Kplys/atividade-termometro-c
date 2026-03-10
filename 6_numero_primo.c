#include <stdio.h>

int main() {
    int num, i, divisores = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Nao e primo.\n");
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                divisores++;
                break;
            }
        }
        if (divisores == 0) {
            printf("E primo.\n");
        } else {
            printf("Nao e primo.\n");
        }
    }
    return 0;
}
