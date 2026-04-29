#include "minhalib.h"
#include <stddef.h> // Para usar o NULL

int contar_nos(No* raiz) {
    if (raiz == NULL) {
        return 0;
    }
    return 1 + contar_nos(raiz->esq) + contar_nos(raiz->dir);
}