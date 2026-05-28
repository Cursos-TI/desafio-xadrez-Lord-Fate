#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função recursiva para movimentação da Torre
void moverTorre(int casas) {

    // Condição de parada da recursão
    if (casas <= 0) {
        return;
    }

    // Exibe o movimento da Torre
    printf("Direita\n");

    // Chamada recursiva
    moverTorre(casas - 1);
}

// Função recursiva para movimentação da Rainha
void moverRainha(int casas) {

    // Condição de parada da recursão
    if (casas <= 0){
        return;
    }

    // Exibe o movimento da Rainha
    printf("Esquerda\n");

    // Chamada recursiva
    moverRainha(casas - 1);
}

// Função recursiva para movimentação do Bispo
void moverBispo(int casas) {

    // Condição de parada da recursão
    if (casas <= 0) {
        return;
    }

    // Loops aninhados
    // Loop externo representa o movimento vertical
    for (int vertical = 1; vertical <= 1; vertical++) {

        // Loop interno representa o movimento horizontal
        int horizontal = 1;

        while (horizontal <= 1) {
            printf("Cima, Direita\n");
            horizontal++;
        }
    }

    // Chamada recursiva
    moverBispo(casas - 1);
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int movimentoBispo = 5;
    int movimentoTorre = 5;
    int movimentoRainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // Agora utilizando recursividade e loops aninhados.

    printf("Movimento do Bispo:\n");

    moverBispo(movimentoBispo);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // Agora utilizando função recursiva.

    printf("\nMovimento da Torre:\n");

    moverTorre(movimentoTorre);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // Agora utilizando função recursiva.

    printf("\nMovimento da Rainha:\n");

    moverRainha(movimentoRainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    // Agora utilizando loops complexos com continue e break.


    printf("\nMovimento do Cavalo:\n");

    int movimentoCima = 2;
    int movimentoDireita = 1;
    
    // Loop externo controla movimento vertical
    for (int contadorCima = 1; contadorCima <= movimentoCima; contadorCima++) {

        // Exibe movimento para cima
        printf("Cima\n");

        // Continue utilizado para continuar o loop
        if (contadorCima < movimentoCima) {
            continue;
        }

        // Loop interno controla movimento horizontal
        int contadorDireita = 1;

        while (contadorDireita <= movimentoDireita) {

            // Exibe movimento para a direita
            printf("Direita\n");

            // Break utilizado para encerrar o loop
            break;
        }
    }
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    // Concluído...

    return 0;
}
