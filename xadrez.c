#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

char d[10] = "direita";
    char e[10] = "esquerda";
    char c[10] = "cima";
    char b[10] = "baixo";
    int i;

void moverBispo() {
    for (i = 1; i <= 5; i++) {
        printf("O Bispo se movimentou para %s/%s.\n", c, d);
    }    
}

void moverRainha() {
    for (i = 1; i <= 8; i++) {
        printf("A Rainha se movimentou para %s.\n", e);
    }
}

void moverTorre() {
    for (i = 1; i <= 5; i++) {
        printf("A Torre se movimentou para %s.\n", d);
    }
}

void moverCavalo() {
    for(i = 1; i<= 2; i++ ) {
        printf("O Cavalo se movimentou para %s.\n", b);
    }for(i = 1; i <= 1; i++) {
        printf("O Cavalo se movimentou para %s.\n", e);
    }
}


int main() {

    // Movimentação 
    // Bispo
    moverBispo();
    printf("\n");
    // Torre
    moverTorre();
    printf("\n");
    // Rainha
    moverRainha();
    printf("\n");
    // Cavalo
    moverCavalo();
    



    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
