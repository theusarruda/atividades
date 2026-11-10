#include <stdio.h>
#include <stdlib.h>

int negativoImpar(int x) {
    if (x % 2 != 0 && x < 1) {
        return 1;
    }
    return 0;
}

int positivoPar(int n) {
    if (n % 2 == 0 && n > 0) {
        return 1;
    }
    return 0;
}

int comparar(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

int main() {
    int valor[10];
    int positivop = 0, negativoi = 0;
    int *vetp, *vetn;
    int i, ip = 0, in = 0;

    printf("Digite os 10 valores:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &valor[i]);

        if (positivoPar(valor[i])) {
            positivop++;
        }
        if (negativoImpar(valor[i])) {
            negativoi++;
        }
    }

    vetp = (int *)malloc(sizeof(int) * positivop);
    vetn = (int *)malloc(sizeof(int) * negativoi);

    for (i = 0; i < 10; i++) {
        if (positivoPar(valor[i])) {
            vetp[ip++] = valor[i];
        }
        if (negativoImpar(valor[i])) {
            vetn[in++] = valor[i];
        }
    }

    qsort(vetp, positivop, sizeof(int), comparar);
    qsort(vetn, negativoi, sizeof(int), comparar);

    printf("\nPositivos pares (crescente): ");
    for (i = 0; i < positivop; i++) {
        printf("%d ", vetp[i]);
    }

    printf("\nNegativos impares (crescente): ");
    for (i = 0; i < negativoi; i++) {
        printf("%d ", vetn[i]);
    }
    printf("\n");

    free(vetp);
    free(vetn);
    return 0;
}
