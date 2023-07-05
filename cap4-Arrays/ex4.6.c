#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 5

int main() {

    /*Escreva um programa que preencha um array de números inteiros de
5 posições com valores fornecidos pelo usuário. Logo em seguida, o programa deve
pedir o valor de um número inteiro. O programa deve apresentar ao usuário todos os
índices (posições) em que o valor fornecido foi encontrado no array.*/

int array[N] = {0};
int arrayIndices[N] = {0};
int numero = 0;
int aux = 0;
bool check = false;

for(int i = 0; i < N; i++) {

    printf("array[%d]: ", i);
    scanf("%d", &array[i]);

}

printf("Buscar por: ");
scanf("%d", &numero);

for(int i = 0; i < N; i ++) {

    if(array[i] == numero) {

        arrayIndices[aux] = i;
        aux++;
        check = true;
    }
}

if(check == false) {

    printf("\nO array nao contem o valor %d.", numero);

} else if(aux == 1) {

    printf("\nO valor %d foi encontrado no indice %d do array.", numero, aux);

} else if(aux == 2) {

    printf("\nO valor %d foi encontrado nos indices %d e %d do array.", numero, arrayIndices[0], arrayIndices[1]);

} else if(aux == 3) {

    printf("\nO valor %d foi encontrado nos indices %d, %d e %d do array.", numero, arrayIndices[0], arrayIndices[1], arrayIndices[2]);

} else if(aux == 4) {

    printf("\nO valor %d foi encontrado nos indices %d, %d, %d e %d do array.", numero, arrayIndices[0], arrayIndices[1], arrayIndices[2], arrayIndices[3]);

} else {

    printf("\nO valor %d foi encontrado nos indices %d, %d, %d, %d e %d do array.", numero, arrayIndices[0], arrayIndices[1], arrayIndices[2], arrayIndices[3], arrayIndices[4]);

}

return 0;

}