#include <stdio.h>

int main(){
    // Movimentos da torre (5 casas para a direita)
    printf("Movimento da Torre: \n");
    for(int i = 0; i < 5; i++)
    {
        printf("Direita\n");
    }

    // Movimento do Bispo (5 casas na diagonal, ou seja, Cima Direita)
    printf("\nMovimento do Bispo: \n");
    int j = 0;
    while(j < 5)
    {
        printf("Cima, Direita\n");
        j++;
    }

    // Movimento da Rainha (8 casas para esquerda)
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do{
        printf("Esquerda\n");
        k++;
    }while(k < 8);

    // Movimento do Cavalo (2 casas para baixo e 1 para esquerda)
    printf("\nMovimento do Cavalo:\n");

    // Primeiro movimento 2 casas para baixo
    for(int i = 0; i < 2; i++)
    {
        printf("Baixo\n");
    }

    // Segundo movimento 1 casa para esquerda
    int i = 0;
    while(i < 1)
    {
        printf("Esquerda\n");
        i++;
    }

    return 0;
}