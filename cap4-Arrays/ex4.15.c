#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 5

int main() {

    /*Exercício 4.15: Escreva um programa que preencha dois arrays de números inteiros de 
    5 posições com valores fornecidos pelo usuário. Um terceiro array deve ser preenchido,
    contendo a intersecção dos elementos contidos nos dois primeiros arrays, ou seja, os
    valores que são comuns aos dois. Nos dois arrays fornecidos, pode haver repetição
    de elementos, mas essa repetição não deve ser refletida no array de intersecção. Por
    fim, o programa deve imprimir o array que contém os valores comuns aos dois arrays
    fornecidos.*/

    int array1[N] = {0};
    int array2[N] = {0};
    int arrayInterseccao[N] = {0};
    int aux = 0;
    bool verify = false;

    printf("Forneca os valores do primeiro array:\n");

    for(int i = 0; i < 5; i++) {

        printf("array1[%d]: ", i);
        scanf("%d", &array1[i]);
    }

    printf("\nForneca os valores do segundo array:\n");

    for(int i = 0; i < 5; i++) {

        printf("array2[%d]: ", i);
        scanf("%d", &array2[i]);
    }

    for(int i = 0; i < 5; i++) {

        for(int j = 0; j < 5; j++) {

            if(array1[i] == array2[j]) {

                for(int j = 0; j < 5; j++) {

                    if(array1[i] == arrayInterseccao[j]) {

                        verify = true;
                    }
                }
                if(verify == false) {

                        arrayInterseccao[aux] = array1[i];
                        aux++;
                }
                verify = false;
            }
        }
    }

    if(aux == 0) {

        printf("Nao ha interseccao entre os elementos dos dois arrays fornecidos!\n");

    } else {

        for(int i = 0; i < aux; i++) {

        printf("arrayInterseccao[%d] = %d\n", i, arrayInterseccao[i]);

    }

    }

return 0;

}
