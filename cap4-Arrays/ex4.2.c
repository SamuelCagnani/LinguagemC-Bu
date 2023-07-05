#include <stdio.h>
#include <stdlib.h>

#define N 5

int main() {

    /*Exercício 4.2: Escreva um programa que preencha um array de números inteiros de
5 posições com valores fornecidos pelo usuário. Logo em seguida, o programa deve
pedir o valor de um número inteiro. O programa deve multiplicar cada um dos valores
do array inicial pelo valor fornecido e armazenar, em um segundo array, também de 5
posições, o valor da multiplicação de cada posição do array inicial pelo valor fornecido
após a leitura do primeiro array. Por fim, o programa deve exibir os valores do array
que contém a multiplicação de cada item.*/

    int array[N] = {0};
    int arrayMult[N] = {0};
    int mult = 0;

    for(int i = 0; i < N; i++) {

        printf("\narray[%d]: ", i);
        scanf("%d", &array[i]);

    }

    printf("\nMultiplicar por: ");
    scanf("%d", &mult);

    for(int i = 0; i < N; i++) {

        arrayMult[i] = array[i] * mult;
        printf("\narrayMult[%d] = %d", i, arrayMult[i]);

    }

return 0;

}