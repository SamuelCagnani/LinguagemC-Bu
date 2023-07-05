#include <stdio.h>
#include <stdlib.h>

#define N 10

int main() {

    /*Exercício 4.14: Escreva um programa que preencha um array de números inteiros de
10 posições com valores fornecidos pelo usuário. O programa deve remover do array
todos os elementos que forem pares. Por fim, o programa deve imprimir o array após
as remoções.*/

int array[N] = {0};
int cont = 10;

for(int i = 0; i < 10; i++) {

    printf("array[%d]: ", i);
    scanf("%d", &array[i]);
}


for(int i = 0; i < 10; i++) {

    do
    {
        if(array[i] % 2 == 0) {

        for(int j = i; j < 10; j++) {

            array[j] = array[j+1];

        }
        cont--;
    }
    } while (array[i] % 2 == 0);
    
}

for(int i = 0; i < cont; i++) {

    printf("array[%d] = %d\n", i, array[i]);
    
}

return 0;

}