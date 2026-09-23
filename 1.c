#include <stdio.h>

int main() {
    float consumo[5];
    float soma = 0;

    for (int i = 0; i < 5; i++) {
        printf("Consumo do morador %d (m3): ", i + 1);
        scanf("%f", &consumo[i]);

        if (consumo[i] > 20)
            printf("-> Acima da media!\n");
        else
            printf("-> Dentro da media.\n");

        soma += consumo[i];
    }

    printf("\nConsumo medio geral: %.2f m3\n", soma / 5);

    return 0;
}

