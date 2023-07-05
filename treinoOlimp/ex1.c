#include <stdio.h>
#include <stdlib.h>

int main() {

    int c = 0;

    do
    {
        scanf("%d", &c);

    } while ( c < 1 || c > 1000);

    if(c % 2 == 0) {

        printf("\n0");


    } else {

        printf("\n1");
    }

    return 0;
    

}