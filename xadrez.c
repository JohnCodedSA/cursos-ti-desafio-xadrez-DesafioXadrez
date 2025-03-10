#include <stdio.h>

// Função recursiva para o movimento da Torre (direção direita)
// A função movimenta a Torre para a direita até o número de casas especificado
void movimento_torre(int casas, int cont) {
    // Condição de parada: se o número de movimentos atingir o número de casas, a função termina
    if (cont >= casas) {
        return;
    }
    // Imprime o movimento da casa para a direita
    printf("Direita\n");
    // Chama recursivamente a função para o próximo movimento
    movimento_torre(casas, cont + 1);
}

// Função recursiva para o movimento da Rainha (esquerda)
// A função movimenta a Rainha para a esquerda até o número de casas especificado
void movimento_rainha(int casas, int cont) {
    // Condição de parada: se o número de movimentos atingir o número de casas, a função termina
    if (cont >= casas) {
        return;
    }
    // Imprime o movimento da casa para a esquerda
    printf("Esquerda\n");
    // Chama recursivamente a função para o próximo movimento
    movimento_rainha(casas, cont + 1);
}

// Função para o movimento do Bispo com loops aninhados (diagonal Cima, Direita)
// O movimento do Bispo é realizado na diagonal (cima e direita) por um número especificado de casas
void movimento_bispo(int casas) {
    // Loop externo controla o número de movimentos verticais (para cima)
    for (int i = 0; i < casas; i++) {
        // Loop interno controla o número de movimentos horizontais (para direita)
        for (int j = 0; j < 1; j++) {
            // Imprime o movimento da casa diagonal (cima e direita)
            printf("Cima, Direita\n");
        }
    }
}

int main() {
    // Imprimindo movimento da peça
    printf("Movimento da Torre: \n");
    movimento_torre(5, 0);  // Movimento recursivo para a Torre (5 casas para a direita)
    printf("\n");

    // Imprimindo movimento da peça
    printf("Movimento do Bispo: \n");
    movimento_bispo(5);  // Movimento do Bispo (5 casas na diagonal Cima e Direita)
    printf("\n");

    // Imprimindo movimento da peça
    printf("Movimento da Rainha:\n");
    movimento_rainha(8, 0);  // Movimento recursivo para a Rainha (8 casas para a esquerda)
    printf("\n");

    // Imprimindo movimento da peça
    printf("Movimento do Cavalo:\n");

    // Movimento do Cavalo: 2 casas para cima e 1 casa para a direita
    // Primeiro movimento 2 casas para cima
    for (int i = 0; i < 2; i++) {
        // Cada iteração do loop move uma casa para cima
        printf("Cima\n");
    }
    // Segundo movimento uma casa para direita
    for(int j = 0; j < 1; j++ )
    {
        printf("Direita\n");
    }

    // Fim do programa
    return 0;
}
