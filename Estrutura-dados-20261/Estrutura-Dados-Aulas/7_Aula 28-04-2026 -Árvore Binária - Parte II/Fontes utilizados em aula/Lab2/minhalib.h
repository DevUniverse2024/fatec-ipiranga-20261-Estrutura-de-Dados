#ifndef MINHALIB_H
#define MINHALIB_H

// Definição da estrutura do nó
typedef struct No {
    int valor;
    struct No *esq;
    struct No *dir;
} No;

// Protótipo da função que o aluno deve implementar
int contar_nos(No* raiz);

#endif