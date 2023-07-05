#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 5

int main() {

    /*Escreva um programa que preencha um array de números inteiros de
5 posições com valores fornecidos pelo usuário. Logo em seguida, o programa deve
pedir o valor de um número inteiro. O programa deve copiar para um segundo array,
todos os valores do primeiro array que são maiores que o último valor fornecido. Ao
final, o programa deve exibir esses valores.*/

int array[N] = {0};
int arrayCopia[N] = {0};
int numero = 0;
int aux = 0;
bool check = false;

for(int i = 0; i < N; i++) {

    printf("\narray[%d]: ", i);
    scanf("%d", &array[i]);

}

printf("Copiar maiores que: ");
scanf("%d", &numero);

for(int i = 0; i < N; i++) {

    if(array[i] > numero) {

        arrayCopia[aux] = array[i];
        aux++;
        check = true;

    }

}

if(check == false) {

    printf("\nNao houve copia!");

} else {

    for(int i = 0; i < aux; i++) {

        printf("\narrayCopia[%d] = %d", i, arrayCopia[i]);

    }

}

return 0;

}