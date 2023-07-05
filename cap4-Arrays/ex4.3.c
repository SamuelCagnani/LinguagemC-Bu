#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

#define N 5

int main() {
    
    /*Escreva um programa que preencha um array de números decimais de
5 posições com valores fornecidos pelo usuário. Após o preenchimento, o programa
deve percorrer o array com os dados fornecidos, calculando o somatório e o produtório
dos valores contidos no mesmo. Esses resultados devem ser exibidos ao final da
execução do programa e devem estar formatados usando duas casas decimais de
precisão. Lembrando que:*/

float array[5] = {0.0};
float somatorio = 0.0;
float produtorio = 1.0;

for(int i = 0; i < N; i++) {

    printf("array[%d]: ", i);
    scanf("%f", &array[i]);

}

for(int i = 0; i < N; i++) {

    somatorio += array[i];
    produtorio*= array[i];

}

printf("\nSomatorio: %.2f", somatorio);
printf("\nProdutorio: %.2f", produtorio);

return 0;

}