#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int movimentoBispo = 5;
    int movimentoTorre = 5;
    int movimentoRainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("Movimento do Bispo:\n");

    int contadorBispo = 1;

    while (contadorBispo <= movimentoBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("\nMovimento da Torre:\n");

    for (int contadorTorre = 1; contadorTorre <= movimentoTorre; contadorTorre++) {
        printf("Direita\n");
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("\nMovimento da Rainha:\n");

    int contadorRainha = 1;

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= movimentoRainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\nMovimento do Cavalo:\n");

    int movimentoBaixo = 2;
    int movimentoEsquerda = 1;

    // Loop for para movimentação vertical do Cavalo
    for (int contadorBaixo = 1; contadorBaixo <= movimentoBaixo; contadorBaixo++) {

        // Loop while aninhado para movimentação horizontal do Cavalo
        int contadorEsquerda = 1;

        while (contadorEsquerda <= movimentoEsquerda) {
            // Imprime o movimento para baixo nas duas primeiras casas
            printf("Baixo\n");

            // Após completar movimento para baixo, imprime o movimento para a esquerda
            if (contadorBaixo == movimentoBaixo) {
                printf("Esquerda\n");
            }
            
            contadorEsquerda++;
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
