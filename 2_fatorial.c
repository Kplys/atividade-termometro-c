int main() {

    int N; 

    printf("Escolha o numero fatorial: ");

    scanf("%d", &N);

    int contador = N;

int conta = 1;

    while (contador >= 1) {

        conta = conta * contador;

        contador--;

    }

    printf("%d", conta);

    return 0;

}
