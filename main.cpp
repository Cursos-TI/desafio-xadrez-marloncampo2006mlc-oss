#include <stdio.h>

// ================= TORRE ==================

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverTorre(casas - 1);
}

// ================= BISPO ==================

void moverBispo(int vertical, int horizontal) {
    if (vertical == 0 || horizontal == 0) return;

    for (int i = 0; i < vertical; i++) {
        printf("Cima\n");
        for (int j = 0; j < horizontal; j++) {
            printf("Direita\n");
        }
    }
    printf("Diagonal Superior Direita completa!\n");
    moverBispo(vertical - 1, horizontal - 1);
}

// ================= RAINHA ==================

void moverRainha(int casas) {
    if (casas == 0) return;

    printf("Cima\n");
    printf("Direita\n");

    moverRainha(casas - 1);
}

// ================= CAVALO ==================

void moverCavalo() {
    int movVertical = 2;
    int movHorizontal = 1;

    printf("Movimento do Cavalo:\n");

    for (int i = 1; i <= movVertical; i++) {
        for (int j = 1; j <= movHorizontal; j++) {
            if (i == 2 && j == 1) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                break; // fim do movimento em L
            }
            else {
                continue;
            }
        }
    }
}

// ================= FUNÇÃO PRINCIPAL ==================
int main() {
    int casasTorre = 3;
    int casasRainha = 3;
    int verticalBispo = 2;
    int horizontalBispo = 2;

    printf("===== Movimento da Torre =====\n");
    moverTorre(casasTorre);

    printf("\n===== Movimento do Bispo =====\n");
    moverBispo(verticalBispo, horizontalBispo);

    printf("\n===== Movimento da Rainha =====\n");
    moverRainha(casasRainha);

    printf("\n===== Movimento do Cavalo =====\n");
    moverCavalo();

    return 0;
}
