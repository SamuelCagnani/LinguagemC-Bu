#include <stdio.h>
#include <stdlib.h>

#define N 10

int main() {

    /*Exercício 4.13: Escreva um programa que preencha um array de números inteiros de
10 posições com valores fornecidos pelo usuário. Em seguida, o programa deve ler o
índice de uma posição do array, ou seja, um valor de 0 a 9. Caso seja informado uma
posição inválida, o programa deve informar o usuário e pedir novamente a posição.
Após a leitura da posição válida, o programa deve “remover” do array o elemento
contido na posição fornecida. Por fim, o programa deve imprimir o array após a
remoção.*/

int array[N] = {0};
int indice = 0;
int aux = 0;

for(int i = 0; i < 10; i++) {

    printf("array[%d]: ", i);
    scanf("%d", &array[i]);

}

do
{

    printf("Posicao a ser removida (0 a 9): ");
    scanf("%d", &indice);

    if(aux > 0) {

        printf("Posicao invalida, forneca novamente!\n");
    }

    aux++;

} while (indice < 0 || indice > 9);

for(int i = indice; i < 10; i++) {

    array[i] = array[i+1];

}

for(int i = 0; i < 9; i++) {

    printf("array[%d] = %d\n", i, array[i]);

}

return 0;

}