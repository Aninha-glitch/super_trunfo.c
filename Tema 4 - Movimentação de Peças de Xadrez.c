#include <stdio.h>

int main() {

    // =========================
    // TORRE - usando FOR
    // Move 5 casas para a direita
    // =========================
    int i;
    int casasTorre = 5;

    printf("Movimento da Torre:\n");

    for(i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // =========================
    // BISPO - usando WHILE
    // Move 5 casas na diagonal (Cima + Direita)
    // =========================
    int casasBispo = 5;
    int contadorBispo = 1;

    printf("\nMovimento do Bispo:\n");

    while(contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    // =========================
    // RAINHA - usando DO-WHILE
    // Move 8 casas para a esquerda
    // =========================
    int casasRainha = 8;
    int contadorRainha = 1;

    printf("\nMovimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while(contadorRainha <= casasRainha);

    return 0;
}