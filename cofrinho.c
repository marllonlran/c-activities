#include <stdio.h>

int main() {
    int opcao;           
    float total = 0;     
    do {
        printf("\n--- Cofrinho ---\n");
        printf("1 - Adicionar R$0.50\n");
        printf("2 - Adicionar R$1.00\n");
        printf("3 - Adicionar R$2.00\n");
        printf("0 - Parar\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            total = total + 0.50;
        } else if (opcao == 2) {
            total = total + 1.00;
        } else if (opcao == 3) {
            total = total + 2.00;
        } else if (opcao != 0) {
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    printf("\nTotal economizado: R$%.2f\n", total);

    return 0;
}