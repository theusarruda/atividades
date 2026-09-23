#include <stdio.h>

int main() {
    int passos;
    int total = 0;
    int horas = 0;
    
    while (total < 10000) {
        printf("Passos na hora %d: ", horas + 1);
        scanf("%d", &passos);
        
        total += passos;
        horas++;
    }
    
    printf("\nMeta atingida! Total de passos: %d\n", total);
    printf("Horas necessarias: %d\n", horas);
    
    return 0;
}