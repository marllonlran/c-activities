#include <stdio.h>

int main() {
    int passos;          
    int total = 0;       
    int horas = 0;       

    while (total < 10000) {
        horas = horas + 1;
        printf("Hora %d - passos dados: ", horas);
        scanf("%d", &passos);

        total = total + passos;
    }

    printf("\nMeta atingida! Total: %d passos.\n", total);
    printf("Levou %d hora(s).\n", horas);

    return 0;
}