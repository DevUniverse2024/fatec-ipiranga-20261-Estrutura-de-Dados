#include "minhalib.h"
#include <stdio.h>
float somar_array(float numeros[],int tamanho) {
    float soma = 0;
    for(int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }
    printf ("O resultado da soma = %f",soma);
    return soma;
}