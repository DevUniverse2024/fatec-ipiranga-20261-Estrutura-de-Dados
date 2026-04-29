#include <stdio.h>
#include <stdlib.h>
#include "minhalib.h"

// Função auxiliar apenas para criar nós rapidamente no teste
No* criar_no(int v) {
    No* novo = (No*)malloc(sizeof(No));
    novo->valor = v;
    novo->esq = novo->dir = NULL;
    return novo;
}

int main() {
    // Montando uma árvore simples:
    //      10
    //     /  \
    //    5    15
    No* raiz = criar_no(10);
    raiz->esq = criar_no(5);
    raiz->dir = criar_no(15);
//Adicione mais Nós
   // raiz->dir->dir = criar_no(20);
   // raiz->esq->esq = criar_no(18);
    

    int resultado = contar_nos(raiz);

   
        printf("\n[PASSOU] Teste Arvore: Contagem correta (%d nos),\n",resultado);
    
    

    return 0;
}