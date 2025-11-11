#include <stdio.h>

int main() {
    
    // -----------------------------
    // Movimento da Torre (usa for)
    // -----------------------------
    
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // -----------------------------
    // Movimento do Bispo (usa while)
    // -----------------------------
    
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    // -----------------------------
    // Movimento da Rainha (usa do-while)
    // -----------------------------
    
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}
