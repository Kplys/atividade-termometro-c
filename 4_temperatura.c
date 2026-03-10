#include <stdio.h>

int main() {
    int opcao;
    float temp, resultado;

    printf("Escolha a conversao:\n1 - Celsius para Fahrenheit\n2 - Fahrenheit para Celsius\nOpcao: ");
    scanf("%d", &opcao);
    printf("Digite a temperatura: ");
    scanf("%f", &temp);

    if (opcao == 1) {
        resultado = (temp * 1.8) + 32;
        printf("Temperatura em Fahrenheit: %.2f\n", resultado);
    } else if (opcao == 2) {
        resultado = (temp - 32) / 1.8;
        printf("Temperatura em Celsius: %.2f\n", resultado);
    } else {
        printf("Opcao invalida!\n");
    }
    return 0;
}
