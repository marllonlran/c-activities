#include <stdio.h>
int main() {
    float soma = 0;
    float consumo;
    float media;
    int i;

    for(i=1; i<=5; i++) {
        printf("Residencia %d - consumo de água (m3): ", i);
        scanf("%f", &consumo);
        soma = soma + consumo;
        if (consumo <= 20 ) {
            printf("Residencia %d: dentro da média\n", i);
        } else {
            printf("Residencia %d: acima da média\n", i);
        }

    }
    media = soma / 5;
    printf("\nMédia geral: %.2f m3", media);
    
    return 0;
}