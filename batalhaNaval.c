#include <stdio.h>

#define TAMANHO 5

int main() {
    // Criando o tabuleiro 5x5 inicializado com zeros (0 representa espaço vazio)
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // Definição dos navios
    // Navio vertical com 3 espaços começando em (1,2)
    int navio_vertical_x = 1, navio_vertical_y = 2;
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio_vertical_x + i][navio_vertical_y] = 1; // 1 representa um navio
    }

    // Navio horizontal com 4 espaços começando em (3,0)
    int navio_horizontal_x = 3, navio_horizontal_y = 0;
    for (int i = 0; i < 4; i++) {
        tabuleiro[navio_horizontal_x][navio_horizontal_y + i] = 1;
    }

    // Exibição das coordenadas ocupadas pelos navios
    printf("Coordenadas dos navios no tabuleiro:\n");

    printf("Navio Vertical:\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d)\n", navio_vertical_x + i, navio_vertical_y);
    }

    printf("\nNavio Horizontal:\n");
    for (int i = 0; i < 4; i++) {
        printf("(%d, %d)\n", navio_horizontal_x, navio_horizontal_y + i);
    }

    // Exibição do tabuleiro
    printf("\nTabuleiro:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}