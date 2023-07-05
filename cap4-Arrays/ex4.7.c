#include <stdio.h>
#include <stdlib.h>

#define N 5

int main() {

    /*Escreva um programa que preencha dois arrays de números inteiros
de 5 posições com valores fornecidos pelo usuário. O programa deve preencher um
terceiro array com a soma dos dois arrays preenchidos previamente e então exibir o
array que contém a soma.*/

int array1[N] = {0};
int array2[N] = {0};
int arraySoma[N] = {0};

printf("\nForneca os valores do primeiro array:");

for(int i = 0; i < N; i ++) {

    printf("\narray1[%d]: ", i);
    scanf("%d", &array1[i]);

}

printf("\nForneca os valores do segundo array:");

for(int i = 0; i < N; i ++) {

    printf("\narray2[%d]: ", i);
    scanf("%d", &array2[i]);
}

for(int i = 0; i < N; i++) {

    arraySoma[i] = array1[i] + array2[i];
    printf("\narraySoma[%d] = %d", i, arraySoma[i]);

}

return 0;

}