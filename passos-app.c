#include <stdio.h>

int main() {
    int passos;
    int total = 0;
    int horas = 0;

    while (total < 10000) {
        printf("Digite o número de passos dados nessa hora passada: ");
        if (scanf("%d", &passos) != 1) {
            fprintf(stderr, "Entrada inválida.\n");
            return 1;
        }

        if (passos < 0) {
            printf("O número de passos não pode ser negativo.\n");
            continue;
        }

        total += passos;
        horas++;
    }

    printf("Meta de 10.000 passos atingida em %d hora%s.\n",
           horas, horas == 1 ? "" : "s");

    return 0;
}