#include <stdio.h>
#include <stdlib.h>

#define N 4

int main() {

    int i = 0;

    float notas[N] = {0};

    for(i = 0; i < N; i++) {

        printf("\nDigite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);

    }

    for(i = N-1; i >= 0; i--) {
        printf("\nNota %d: %.2f", i + 1, notas[i]);
    }

    printf("\n\n\n");

    return 0;

}