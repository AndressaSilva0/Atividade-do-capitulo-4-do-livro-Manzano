#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

int a, N;

printf("Digite o valor de A, sendo ele positivo ou negativo: \n");
scanf("%d", &a);

    if (a>0){
    printf("O valor de A é  %d ", a);
    }else{
    N = a * (-1);
    printf("O valor de A é  %d ", N);
    }

 return 0;

}
