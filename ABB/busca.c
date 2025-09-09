#include <stdio.h>

typedef struct no {
   int chave;
   struct no *esq, *dir;
} no;

no *busca (no *r, int x){
    if (r!= NULL)
    {
        if (r->chave > x) return busca(r->esq, x);
        else if (r->chave < x) return busca(r->esq, x);
    }
    return r;
}

