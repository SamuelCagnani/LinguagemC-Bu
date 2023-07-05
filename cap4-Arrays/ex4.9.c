#include <stdio.h>
#include <stdlib.h>

#define N 5

int main() {

    /*Exercício 4.9: Escreva um programa que preencha um array de números inteiros de 5 
posições com valores fornecidos pelo usuário. O programa deve copiar os valores desse
array para um segundo array, sendo que no segundo array, os valores serão inseridos
de forma inversa. Ao final, o programa deve exibir os valores do array invertido.*/

int array[N] = {0};
int arrayInv[N] = {0};
int aux = N-1;

for(int i = 0; i < N; i++) {

    printf("\narray[%d]: ", i);
    scanf("%d", &array[i]);

}

for(int i = 0; i < N; i++) {

    arrayInv[i] = array[aux];
    aux--;

}

for(int i =0; i < N; i++) {

    printf("\narrayInv[%d] = %d", i, arrayInv[i]);
}

return 0;

}