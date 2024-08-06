#include "FilaCircular.h"

void inicializaFila(FilaCircular *fila) {
    fila->inicio = 0;
    fila->fim = -1;
    fila->tamanho = 0;
}

int estaVazia(FilaCircular *fila) {
    return fila->tamanho == 0;
}

int estaCheia(FilaCircular *fila) {
    return fila->tamanho == MAX;
}

int enfileirar(FilaCircular *fila, int valor) {
    if (estaCheia(fila)) {
        return 0;  // Fila cheia
    }
    fila->fim = (fila->fim + 1) % MAX;
    fila->itens[fila->fim] = valor;
    fila->tamanho++;
    return 1;  // Sucesso
}

int desenfileirar(FilaCircular *fila, int *valor) {
    if (estaVazia(fila)) {
        return 0;  // Fila vazia
    }
    *valor = fila->itens[fila->inicio];
    fila->inicio = (fila->inicio + 1) % MAX;
    fila->tamanho--;
    return 1;  // Sucesso
}

int consultarInicio(FilaCircular *fila, int *valor) {
    if (estaVazia(fila)) {
        return 0;  // Fila vazia
    }
    *valor = fila->itens[fila->inicio];
    return 1;  // Sucesso
}
