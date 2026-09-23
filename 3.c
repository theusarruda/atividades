#include <stdio.h>

int main() {
    float nota;
    float soma = 0;
    float media;
    
    for (int i = 0; i < 10; i++) {
        printf("Nota do cliente %d (0 a 10): ", i + 1);
        scanf("%f", &nota);
        soma += nota;
    }
    
    media = soma / 10;
    printf("\nMedia geral: %.2f\n", media);
    
    if (media < 7)
        printf("ALERTA: A media esta abaixo do esperado!\n");
    
    return 0;
}