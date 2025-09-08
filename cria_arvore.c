#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *esq, *dir;
} celula;

celula* cria_arvore(int x){
    celula* raiz = (celula*)malloc(sizeof(celula));
    raiz->dado = x;
    raiz->esq = NULL;
    raiz->dir = NULL;
    return raiz;
}