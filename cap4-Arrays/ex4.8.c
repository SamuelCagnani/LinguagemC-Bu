#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 5

int main() {

    /*Escreva um programa que preencha um array de números inteiros de 5
posições com valores fornecidos pelo usuário. O programa deve exibir os números
pares desse array e depois os números ímpares, todos na ordem em que aparecem no
array.*/

int array[N] = {0};
int arrayPar[N] = {0};
int arrayImpar[N] = {0};
int auxPar = 0;
int auxImpar = 0;
bool checkPar = false;
bool checkImpar = false;

for(int i = 0; i < N; i++) {

    printf("\narray[%d]: ", i);
    scanf("%d", &array[i]);

}

for(int i = 0; i < N; i++) {

    if(array[i] % 2 == 0) {

        arrayPar[auxPar] = array[i];
        auxPar++;
        checkPar = true;

    } else {

        arrayImpar[auxImpar] = array[i];
        auxImpar++;
        checkImpar = true;

    }
}

    if(checkPar == false) {

        printf("\nNumeros pares: nao ha.");

    } else {

        printf("\nNumeros pares:");

        for(int i = 0; i < auxPar; i++) {

            printf(" %d", arrayPar[i]);

        }

        printf(".");

    } 
    
    if(checkImpar == false) {

        printf("\nNumeros impares: nao ha.");

    } else {

        printf("\nNumeros impares:");

        for(int i = 0; i < auxImpar; i++) {

            printf(" %d", arrayImpar[i]);

        }

        printf(".");

    }

return 0;

}