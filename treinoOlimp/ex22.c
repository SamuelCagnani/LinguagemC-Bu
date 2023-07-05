#include <stdio.h>

int main() {

    int i, c, n, n1, n2, soma1, soma2;

    scanf("%d", &c);

    for (i = 0; i < c; i++){

        scanf("%d %d", &n1, &n2);
        soma1 = 0;
        soma2 = 0;

        while(n1 > 9){
            soma1 = soma1 + n1%10;
            n1 = n1/10;
        }

        soma1 = soma1 + n1;

        while(n2 > 9){
            soma2 = soma2 + n2%10;
            n2 = n2/10;
        }

        soma2 = soma2 + n2;

        if(soma1 > soma2){
            printf("1\n");

        } while(n2 > 9){
            soma2 = soma2 + n2%10;
            n2 = n2/10;
        }
        
        soma2 = soma2 + n2;

        if(soma1 > soma2){
            printf("1\n");
        }else if(soma2 > soma1){
            printf("2\n");
        }else{
            printf("0\n");
        }


    }
    }