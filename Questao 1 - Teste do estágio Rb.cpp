#include <stdio.h>

int main() {
    int valor;
    int a = 0, b = 1, c, i = 0, soma;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    printf("Série de Fibonacci até %d: ", valor);

    while (a <= valor) {
        printf("%d, ", a);
        soma = a + b;
        c = soma;
        a = b;
        b = c;
        i++;
    }

    printf("\n");

    return 0;
}
