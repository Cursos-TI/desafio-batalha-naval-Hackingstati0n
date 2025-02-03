#include <stdio.h>

#define TAMANHO_TABULEIRO 5

int main() {
    // Inicializa o tabuleiro com 0 (água)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // Posiciona um navio horizontalmente na linha 1 (começando na coluna 2)
    int linhaHorizontal = 1, colunaInicialHorizontal = 2;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaHorizontal][colunaInicialHorizontal + i] = 1;
    }

    // Posiciona um navio verticalmente na coluna 3 (começando na linha 2)
    int colunaVertical = 3, linhaInicialVertical = 2;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaInicialVertical + i][colunaVertical] = 1;
    }

    // Exibe as coordenadas dos navios
    printf("Coordenadas do Navio Horizontal:\n");
    for (int i = 0; i < 3; i++) {
        printf("Parte %d: (%d, %d)\n", i + 1, linhaHorizontal, colunaInicialHorizontal + i);
    }

    printf("\nCoordenadas do Navio Vertical:\n");
    for (int i = 0; i < 3; i++) {
        printf("Parte %d: (%d, %d)\n", i + 1, linhaInicialVertical + i, colunaVertical);
    }

    // Output Que Exibe o tabuleiro
    printf("\nTabuleiro (1 = Navio, 0 = Água):\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
