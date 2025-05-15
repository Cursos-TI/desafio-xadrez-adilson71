#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
   int i;                                                                                                          
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // ------------------------
    // Movimento do BISPO (while)
    // ------------------------
    printf("Movimento do Bispo (5 casas na diagonal superior direita):\n");
    i = 1;
    while (i <= 5) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    printf("========================================\n");


    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // ------------------------
    // Movimento da TORRE (for)
    // ------------------------
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("======================================\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // ------------------------
    // Movimento da RAINHA (do-while)
    // ------------------------
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    i = 1;
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while (i <= 8);
    
    printf("======================================\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    //movimento a cima duas vezes e uma a direita
    int movimentoCompleto = 1;

        while(movimentoCompleto --)
            {
                for (int i = 0; i < 2; i++){
                    printf("cima\n");
                }
                printf("Direita\n");
            }

        printf("======================================\n");

        while(movimentoCompleto ++)
            {
                for (int i = 0; i < 2; i++){
                    printf("baixo\n");
                }
                printf("esquerda\n");
            }

         printf("======================================\n");

            while(movimentoCompleto --)
            {
                for (int i = 0; i < 2; i++){
                    printf("direita\n");
                }
                printf("cima\n");
            }

        printf("======================================\n");
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
