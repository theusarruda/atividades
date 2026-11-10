#include <stdio.h>

int elevado(int base, int potencia) {
        int i;
        int resultado = 1;

        for (i = 0; i < potencia; i++) {
            resultado = resultado * base;
        }
        return resultado;
    }

int ehPrimo(int n) {
    if (n <= 1) {
        return 0;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;

}

int main() {
    int posicao[5];
    int primo = (ehPrimo(5));
    int i, j;

    for (i = 0; i < 5; i++) {
        printf("Informe o valor: ");
        scanf("%d", &posicao[i]);
    }

    for (i = 0; i < 5; i++) {
        if (ehPrimo(posicao[i])) {
            for (j = 0; j < 5; j++) {
                if (!ehPrimo(posicao[j])) {
                    printf("%d elevado a %d = %d\n",posicao[i], posicao[j], elevado(posicao[i], posicao[j]));
                }
            }
        }
    }
}