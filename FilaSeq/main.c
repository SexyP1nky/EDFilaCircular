#include <stdio.h>
#include "FilaCircular.h"

void testeFilaVazia(FilaCircular *fila) {
    if (estaVazia(fila)) {
        printf("A fila está vazia.\n");
    } else {
        printf("A fila não está vazia.\n");
    }
}

void testeFilaCheia(FilaCircular *fila) {
    if (estaCheia(fila)) {
        printf("A fila está cheia.\n");
    } else {
        printf("A fila não está cheia.\n");
    }
}

int main() {
    FilaCircular fila;
    int valor;

    inicializaFila(&fila);

    testeFilaVazia(&fila);

    printf("Enfileirando 1, 2, 3, 4, 5...\n");
    for (int i = 1; i <= 5; i++) {
        if (enfileirar(&fila, i)) {
            printf("Valor %d enfileirado com sucesso.\n", i);
        } else {
            printf("Erro ao enfileirar o valor %d.\n", i);
        }
    }

    testeFilaCheia(&fila);

    printf("Tentando enfileirar 6...\n");
    if (enfileirar(&fila, 6)) {
        printf("Valor 6 enfileirado com sucesso.\n");
    } else {
        printf("Erro ao enfileirar o valor 6. Fila cheia.\n");
    }

    printf("Consultando o início da fila...\n");
    if (consultarInicio(&fila, &valor)) {
        printf("O valor no início da fila é: %d\n", valor);
    } else {
        printf("Erro ao consultar o início da fila.\n");
    }

    printf("Desenfileirando valores...\n");
    for (int i = 1; i <= 5; i++) {
        if (desenfileirar(&fila, &valor)) {
            printf("Valor %d desenfileirado com sucesso.\n", valor);
        } else {
            printf("Erro ao desenfileirar o valor.\n");
        }
    }

    testeFilaVazia(&fila);

    return 0;
}
