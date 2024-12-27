#include <stdio.h>
#include "./conversormassa.h"

int main()
{
    int option = 0;
    do
    {
        // Exibe o menu
        printf("\nMenu de Conversoes:\n");
        printf("1. Unidades de massa\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            converter_massa();
            break;
        case 0:
            printf("\nEncerrando.\n");
            break;
        default:
            printf("\nVoce digitou um numero invalido, tente novamente.\n");
            main();
            break;
        }
    } while (option != 9);
}