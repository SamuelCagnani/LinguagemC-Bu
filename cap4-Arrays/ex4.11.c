#include <stdio.h>
#include <stdlib.h>


int main() {
    

    /*Exercício 4.11: Escreva um programa para ler a quantidade de elementos que serão
armazenados em um array de 10 posições de números inteiros. O programa deve
aceitar apenas valores entre 1, inclusive, e 9, inclusive. Caso o seja fornecido um
valor incorreto, ou seja, fora desse intervalo, o programa deve requisitar novamente
a entrada da quantidade. Após a leitura de uma quantidade válida, ele deve ler a
quantidade de elementos informados, armazenando-os no array a partir da primeira
posição. Logo em seguida, o programa deve pedir o valor de um número inteiro. Esse
número deve ser inserido na primeira posição do array. Antes da inserção, perceba
que há a necessidade de deslocar os elementos existentes para a casa à direita. Por
fim, o programa deve imprimir o array após o deslocamento e a inclusão.*/

int array[10] = {0};
int quantidadeElementos = 0;
int valorInserido = 0;
int aux = 0;

do
{

    printf("Quantidade de elementos (1 a 9): ");
    scanf("%d", &quantidadeElementos);

    if(aux > 0) {

        printf("Quantidade incorreta, forneca novamente!\n");
    }

    aux++;

} while (quantidadeElementos < 1 || quantidadeElementos > 9);

for(int i = 0; i < quantidadeElementos; i++) {

    printf("array[%d]: ", i);
    scanf("%d", &array[i]);
}

printf("Valor que sera inserido: ");
scanf("%d", &valorInserido);


for(int i = quantidadeElementos; i >= 0; i--) {

    array[i] = array[i-1];

}

array[0] = valorInserido;


for(int i = 0; i < quantidadeElementos + 1; i++) {

    printf("array[%d] = %d\n", i, array[i]);
}


return 0;

}