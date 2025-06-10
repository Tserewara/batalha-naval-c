// Batalha Naval - Nível Novato
#include <stdio.h>

#define TAM 10
#define TAM_NAVIO 3

int main() {
    int tabuleiro[TAM][TAM] = {0};

    // Coordenadas de início dos navios (linha, coluna)
    int linhaH = 2, colunaH = 4; // Navio horizontal
    int linhaV = 5, colunaV = 1; // Navio vertical

    // Validação para não sair da matriz
    if (colunaH + TAM_NAVIO <= TAM && linhaV + TAM_NAVIO <= TAM) {

        // Posiciona navio horizontal
        for (int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[linhaH][colunaH + i] = 3;
        }

        // Posiciona navio vertical
        for (int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[linhaV + i][colunaV] = 3;
        }

        // Exibe o tabuleiro
        printf("Tabuleiro Batalha Naval (0 = água, 3 = navio)\n\n");
        for (int i = 0; i < TAM; i++) {
            for (int j = 0; j < TAM; j++) {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Erro: coordenadas inválidas para os navios!\n");
    }

    return 0;
}
