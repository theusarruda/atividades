#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int ehPar(int n) {
    if (n % 2 == 0) {
        return 1;
    }

    return 0;
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
int somaFibonacci(int n) {
    if ( n == 0) return 0;
    return somaFibonacci(n-1) + fibonacci(n);
}

int main() {
    int aposta[5], soma[5];
    char apostador[5][20];
    int i, maior;
    int primeiro = 0, segundo = 0;


    for (i = 0; i < 5; i++) {
        printf("Informe o nome do apostador: ");
        scanf("%s", apostador[i]);

        printf("Informe o valor da aposta: ");
        scanf("%d", &aposta[i]);


        soma[i] = somaFibonacci(aposta[i]);
        printf("Soma de Fibonacci de %d = %d\n\n", aposta[i], soma[i]);
    }

    maior = 0;
    for (i = 1; i < 5; i++) {
        if (soma[i] > soma[maior]) {
            maior = i;
        }
    }

    for (i = 0; i < 5; i++) {

        if (ehPrimo(soma[i]) && (primeiro == 0 || soma[i] > soma[primeiro])) {
            primeiro = i;
        }
    }
    for (i = 0; i < 5; i++) {
        if (i != primeiro && ehPar(soma[i]) && (segundo == 0 || soma[i] > soma[segundo])) {
            segundo = i;
        }
    }

    if (primeiro != 0) {
        printf("1o lugar: %s (soma %d, primo)\n", apostador[primeiro], soma[primeiro]);
    } else {
        printf("1o lugar: ninguem (nenhuma soma prima)\n");
    }

    if (segundo != 0) {
        printf("2o lugar: %s (soma %d, par)\n", apostador[segundo], soma[segundo]);
    } else {
        printf("2o lugar: ninguem (nenhuma soma par)\n");
    }

    return 0;
}
