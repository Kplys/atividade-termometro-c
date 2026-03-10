
#include <stdio.h>

int main() {
    int numeros[5];
    int soma = 0;

    // O loop repete 5 vezes (i vai de 0 até 4)
    for (int i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        
        soma = soma + numeros[i];
    }

    printf("A soma dos numeros no array e: %d\n", soma);

    return 0;
}
