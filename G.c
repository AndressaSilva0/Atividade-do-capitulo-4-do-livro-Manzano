#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int a, b, c, d;

 printf("Digite o valor de A: ");
 scanf("%d", &a);
 printf("Digite o valor de B: ");
 scanf("%d", &b); 
 printf("Digite o valor de C: ");
 scanf("%d", &c);
 printf("Digite o valor de D: ");
 scanf("%d", &d);

if(a%2==0 && a%3==0){
    printf("Mostrar valores de A sendo ele divisivel por 2 e 3: %d \n ", a);
}
if (b%2==0 && b%3==0){
    printf("\nMostrar valores de B sendo ele divisivel por 2 e 3: %d \n", b);  
}
if (c%2==0 && c%3==0){
    printf("\nMostrar os valores de C sendo ele divisivel por 2 e 3: %d \n", c);   
}
if (d%2==0 && d%3==0){
    printf("\nMostrar os valores de D sendo ele divisivel por 2 e 3: %d\n", d); 
}

return 0;
}