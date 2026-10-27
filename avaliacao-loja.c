#include <stdio.h>

int main() {
    float nota;          
    float soma = 0;      
    float media;
    int i;

    for (i = 1; i <= 10; i++) {
        printf("Cliente %d - nota (0 a 10): ", i);
        scanf("%f", &nota);

        soma = soma + nota;
    }

    media = soma / 10;
    printf("\nMédia das notas: %.2f\n", media);

    if (media < 7) {
        printf("ALERTA: a média está abaixo de 7!\n");
    } else {
        printf("A média está acima de 7.\n");
    }

    return 0;
}