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

    //Movimento da Rainha (8 casas para esquerda)
    printf("\nMovimento da Rainha\n");
    int k = 0;
    do{
        printf("Esquerda\n");
        k++;
    }while(k < 8);
    


    return 0;
}