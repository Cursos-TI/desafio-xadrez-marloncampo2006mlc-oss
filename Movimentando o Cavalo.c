#include <stdio.h>

int main() {
    // ---------------------------------------
    // Movimento da TORRE (usa estrutura for)
    // ---------------------------------------
    
    int casasTorre = 5;
    printf("Movimento da Torre:\n");

    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // ---------------------------------------
    // Movimento do BISPO (usa estrutura while)
    // ---------------------------------------

    int casasBispo = 5;
    int contadorBispo = 1;
    printf("\nMovimento do Bispo:\n");

    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    // ---------------------------------------
    // Movimento da RAINHA (usa estrutura do-while)
    // ---------------------------------------

    int casasRainha = 8;
    int contadorRainha = 1;
    printf("\nMovimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    // ---------------------------------------
    // Movimento do CAVALO (usa loops aninhados: while + for)
    // ---------------------------------------

    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;
    int contadorCavalo = 0;

    printf("\nMovimento do Cavalo:\n");

    while (contadorCavalo < 1) {

        for (int i = 1; i <= movimentosBaixo; i++) {
            printf("Baixo\n");
        }

        for (int j = 1; j <= movimentosEsquerda; j++) {
            printf("Esquerda\n");
        }

        contadorCavalo++;
    }

    return 0;
}
