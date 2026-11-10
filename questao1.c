#include <stdio.h>
int impar(int x) {
    if (x % 2 != 0) {
        return 1;
    }
}

int ehPar(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int numeros[12];
    int numerosiguais[12];
    int vezes[12];
    int qtd = 0;
    int achou;
    int i, j;
    int soma = 0;
    int par[12];

    for (i = 0; i < 12; i++) {
        printf("Informe o número do sorteio: ");
        scanf("%d", &numeros[i]);
    }
    for (i = 0; i < 12; i++) {
        achou = 0;
        for (j = 0; j < qtd; j++) {
            if (numerosiguais[j] == numeros[i]) {
                vezes[j]++;
                achou = 1;
                break;
            }
        }
        if (!achou) {
            numerosiguais[qtd] = numeros[i];
            vezes[qtd] = 1;
            qtd++;
        }
    }

    for (j = 0; j < qtd; j++) {
        printf("Número %d: %d vez(es)\n", numerosiguais[j], vezes[j]);
    }
    for (j = 0; j < qtd; j++) {
        if (impar(vezes[j])) {
            soma = soma + numerosiguais[j];
            printf("%d", numerosiguais[j]);
        }
    }
    printf("Soma: %d\n", soma);
    char nome[soma][50];
    int preco[soma];

    for (i = 0; i < soma; i++) {
        printf("Informe o nome do produto e o preço (nome, preço): \n");
        scanf(" %49[^,], %d", nome[i], &preco[i]);
    }

    for (j = 0; j < qtd; j++) {
        if (!impar(vezes[j])) {
            par[qtd] = 1;
            j++;
        }
    }



    return 0;
}
