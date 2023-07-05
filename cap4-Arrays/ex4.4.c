#include <stdio.h>
#include <stdlib.h>

#define N 5


int main() {

    /*Escreva um programa que preencha um array de números inteiros
de 5 posições com valores fornecidos pelo usuário. Logo em seguida, o programa
deve pedir o valor de um número inteiro. O programa deve apresentar ao usuário a 
mensagem “ACHEI” caso o valor seja encontrado em um determinado índice (posição)
ou “NAO ACHEI” caso contrário.*/

int array[N] = {0};
int buscarNumero = 0;

for(int i = 0; i < N; i++) {

    printf("\narray[%d]: ", i);
    scanf("%d", &array[i]);

}

printf("\nBuscar por: ");
scanf("%d", &buscarNumero);

for(int i = 0; i < N; i++) {

    if(array[i] == buscarNumero) {

        printf("\nIndice %d: ACHEI", i);

    } else {
        printf("\nIndice %d: NAO ACHEI", i);
    }

}

return 0;

}