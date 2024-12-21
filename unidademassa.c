#include <stdio.h>
#include <string.h>
#include <locale.h>

// Fun��es para convers�o de unidades

double gramas_para_quilogramas(double gramas) {
    return gramas / 1000.0;
}

double gramas_para_libras(double gramas) {
    return gramas / 453.592;
}

double quilogramas_para_libras(double quilogramas) {
    return quilogramas * 2.20462;
}

double libras_para_quilogramas(double libras) {
    return libras * 0.453592;
}

int main() {

    setlocale(LC_ALL,"Portuguese_Brazil");
    int opcao;
    double valor;

    do {
        // Menu de op��es
        printf("\nMenu de Convers�o:\n");
        printf("1. Gramas para Quilogramas\n");
        printf("2. Gramas para Libras\n");
        printf("3. Quilogramas para Gramas\n");
        printf("4. Libras para Gramas\n");
        printf("5. Quilogramas para Libras\n"); //adicionado nova convers�o
        printf("6. Libras para Quilogramas\n"); //adicionado nova convers�o
        printf("0. Sair\n");

        // Leitura da op��o escolhida pelo usu�rio
        printf("Escolha op��o desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor em gramas: ");
                scanf("%lf", &valor);
                printf("%.2lf gramas equivalem a %.2lf quilogramas.\n", valor, gramas_para_quilogramas(valor));
                break;  //adicionado break, c�digo estava dando erro
            case 2:
                // ... (outros casos)
            case 3:
                // ... (outros casos)
            case 4:
                printf("Digite o valor em libras: ");
                scanf("%lf", &valor);
                printf("%.2lf libras equivalem a %.2lf gramas.\n", valor, libras_para_quilogramas(valor) * 1000.0);
                break;  //adicionado break, c�digo estava dando erro
            case 5:
                // ... (outros casos)
            case 6:
                printf("Digite o valor em libras: ");
                scanf("%lf", &valor);
                printf("%.2lf libras equivalem a %.2lf quilogramas.\n", valor, libras_para_quilogramas(valor));
                break;  //adicionado break, c�digo estava dando erro
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Op��o inv�lida.\n");
        }
    } while (opcao != 0);

    return 0;
}