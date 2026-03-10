#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    int tamanho;

    printf("Digite uma frase: ");
    fgets(texto, 100, stdin);

    tamanho = strlen(texto) - 1; 

    printf("A string tem %d caracteres.\n", tamanho);

    return 0;
}
