#ifndef FILACIRCULAR_H
#define FILACIRCULAR_H

#define MAX 5  // Definindo o tamanho máximo da fila

typedef struct {
    int itens[MAX];
    int inicio, fim, tamanho;
} FilaCircular;

// Inicializa a fila
void inicializaFila(FilaCircular *fila);

// Verifica se a fila está vazia
int estaVazia(FilaCircular *fila);

// Verifica se a fila está cheia
int estaCheia(FilaCircular *fila);

// Insere um item no fim da fila
int enfileirar(FilaCircular *fila, int valor);

// Remove um item do início da fila
int desenfileirar(FilaCircular *fila, int *valor);

// Consulta o início da fila
int consultarInicio(FilaCircular *fila, int *valor);

#endif
