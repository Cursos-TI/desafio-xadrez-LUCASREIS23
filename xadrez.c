#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // quantidade de casas por peca
    int casasrainha = 8;
    int casasbispo = 5;
    int casastorre = 5;

    // movimentaçao da torre (for)
    printf("Movimento da Torre\n");
    for ( int i = 1; i<=casastorre; i++) {
            printf("Direita\n");
    }

    //movimentaçao bispo (while)
        printf("Movimento da Bispo\n");
        int i = 1;
    while (i <= casasbispo) {
        printf("Cima,Direita\n");
        i++;
    }

    // movimentaçao rainha (do-while)
    printf ("Movimento Rainha\n");
    int j = 1;
    do {
        printf("esquerda\n");
        j++;
    }while (j <= casasrainha);

    
    //Movimentacao cavalo
    printf ("Movimentacao Cavalo \n");
    for ( i= 1; i<=2; i++) {
        printf("Baixo\n");
    }
     i= 1 ;
    while (i<=1) {
        printf("esquerda\n");
        i++;
    }

    return 0;
}
