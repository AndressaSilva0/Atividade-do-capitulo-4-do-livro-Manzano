#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
float n1, n2, n3, n4, MD;

printf("Digite a primeira nota: ");
scanf("%f", &n1);
printf("Digite a segunda nota: ");
scanf("%f", &n2);
printf("Digite a terceira nota: ");
scanf("%f", &n3);
printf("Digite a quarta nota: ");
scanf("%f", &n4);

MD = (n1+n2+n3+n4)/4;

if (MD>=5){
    printf("O resultado da média do aluno é %.1f, foi aprovado(a) ", MD); 
}else{
    printf("O resultado da média do aluno é %.1f, foi reprovado", MD);
}

return 0;
}