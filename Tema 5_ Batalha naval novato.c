#include <stdio.h>

#define TAM 10
#define TAM_NAVIO 3

int main() {

    int tabuleiro[TAM][TAM];

    // Inicializa o tabuleiro com 0 (água)
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Vetores representando os navios
    int navioHorizontal[TAM_NAVIO] = {3,3,3};
    int navioVertical[TAM_NAVIO] = {3,3,3};

    // Coordenadas iniciais (definidas no código)
    int linhaH = 2, colunaH = 4;  // navio horizontal
    int linhaV = 5, colunaV = 1;  // navio vertical

    // ==============================
    // VALIDAÇÃO DO NAVIO HORIZONTAL
    // ==============================

    if (colunaH + TAM_NAVIO <= TAM) {

        for(int i = 0; i < TAM_NAVIO; i++) {
            if(tabuleiro[linhaH][colunaH + i] != 0) {
                printf("Erro: Sobreposição no navio horizontal!\n");
                return 1;
            }
        }

        for(int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
        }

    } else {
        printf("Erro: Navio horizontal fora do tabuleiro!\n");
        return 1;
    }

    // ==============================
    // VALIDAÇÃO DO NAVIO VERTICAL
    // ==============================

    if (linhaV + TAM_NAVIO <= TAM) {

        for(int i = 0; i < TAM_NAVIO; i++) {
            if(tabuleiro[linhaV + i][colunaV] != 0) {
                printf("Erro: Sobreposição no navio vertical!\n");
                return 1;
            }
        }

        for(int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[linhaV + i][colunaV] = navioVertical[i];
        }

    } else {
        printf("Erro: Navio vertical fora do tabuleiro!\n");
        return 1;
    }

    // ==============================
    // EXIBIÇÃO DO TABULEIRO
    // ==============================

    printf("\nTABULEIRO BATALHA NAVAL\n\n");

    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}