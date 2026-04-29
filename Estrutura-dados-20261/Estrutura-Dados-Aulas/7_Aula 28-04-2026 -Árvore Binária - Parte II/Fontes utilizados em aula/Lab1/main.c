#include <stdio.h>
#include "minhalib.h"

int main() {
    float teste1[5] = {1, 2, 3, 4, 5}; // Soma esperada: 15
    float res = somar_array(teste1, 5);

    if (res == 15.0) {
        printf("[PASSOU] Teste 1: Soma basica\n");
    } else {
        printf("[FALHOU] Teste 1: Esperado 15, obtido %.2f\n", res);
    }
    return 0;
}