#include <stdio.h>
#include <stdlib.h>

#define N 5

int main() {

        /*Exercício 4.1: Escreva um programa que preencha um array de números inteiros de 5
posições a partir de números fornecidos pelo usuário. O programa deve armazenar
em um segundo array o cubo de cada elemento do primeiro array. Por fim, o programa
deve exibir os valores do array que contém o cubo do primeiro array.
*/ 

    int array[N] = {0};
    int arrayCubo[N] = {0};

    for(int i = 0; i < N; i++) {

        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < 5; i++) {

        arrayCubo[i] = array[i] * array[i] * array[i];
        printf("\narrayCubo[%d] = %d", i, arrayCubo[i]);
    }
    
return 0;

}