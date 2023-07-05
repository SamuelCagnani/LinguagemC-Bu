#include <stdio.h>
#include <stdlib.h>

#define N 5

int main() {

    /*Exercício 4.12: Escreva um programa que preencha um array de números inteiros de
5 posições com valores fornecidos pelo usuário. O primeiro elemento do array deve
ser “excluído”, deslocando para isso todos os elementos a partir da segunda posição
para a esquerda. Por fim, o programa deve imprimir o array após a remoção.*/

int array[N] = {0};

for(int i = 0; i < 5; i++) {

    printf("array[%d]: ", i);
    scanf("%d", &array[i]);

}

for(int i = 0; i < 5; i++) {

    array[i] = array[i+1];

}

for(int i = 0; i < 4; i++) {

    printf("array[%d] = %d\n", i, array[i]);

}

return 0;

}