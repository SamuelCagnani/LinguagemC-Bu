#include <stdio.h>
#include <stdlib.h>

#define N 5

int main() {
    
    /*Escreva um programa que preencha um array de números inteiros de
5 posições com valores fornecidos pelo usuário. Logo em seguida, o programa deve
pedir o valor de um número inteiro. O programa deve contar quantas ocorrências do
número fornecido foram encontradas no array, apresentando, ao final, essa contagem.*/

int array[N] = {0};
int numero = 0;
int cont = 0;

for(int i = 0; i < N; i++) {

    printf("\narray[%d]: ", i);
    scanf("%d", &array[i]);

}

printf("Busque por: ");
scanf("%d", &numero);

for(int i = 0; i < N; i++) {

    if(array[i] == numero) {

        cont++;

    }
}

if(cont == 0) {

    printf("\nO array nao contem o valor %d.", numero);

} else if(cont == 1) {

    printf("\nO array contem %d ocorrencia do valor %d.", cont, numero);

} else {

    printf("\nO array contem %d ocorrencias do valor %d.", cont, numero);

}

return 0;

}