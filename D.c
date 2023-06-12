#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

 float n1, n2, n3, n4,NE, MD1, MD2;

printf("Digite a primeira nota: ");
scanf("%f", &n1);
printf("Digite a segunda nota: ");
scanf("%f", &n2);
printf("Digite a terceira nota: ");
scanf("%f", &n3);
printf("Digite a quarta nota: ");
scanf("%f", &n4);

MD1 = (n1+n2+n3+n4)/4;

if (MD1>=7){
    printf("O aluno foi a aprovado com uma média de %f", MD1);
}else{
    printf("Qual a nota do exame final?: ");
    scanf("%f", &NE);
    MD2 = (MD1+NE)/2;
   printf("O aluno foi aprovado com %f ", MD2);
   if (MD2>=5){
    printf("A média de recuperação final obtida pelo aluno é %.1f, o aluno foi aprovado", MD2);
    }else{
        printf("A média de recuperação final obtida pelo aluno é %.1f, o aluno foi reprovado", MD2);
    } 
  }

return 0;
}