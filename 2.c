#include <stdio.h>

int main() {
    float total = 0, moeda;
    int opcao;

    do {
        printf("\nEscolha a moeda:\n");
        printf("1 - R$0,50\n2 - R$1,00\n3 - R$2,00\n0 - Parar\n");
        scanf("%d", &opcao);

        if (opcao == 1) moeda = 0.50;
        else if (opcao == 2) moeda = 1.00;
        else if (opcao == 3) moeda = 2.00;
        else moeda = 0;

        total += moeda;

    } while (opcao != 0);

    printf("\nTotal acumulado: R$%.2f\n", total);

    return 0;
}
