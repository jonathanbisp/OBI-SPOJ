#include <stdio.h>

int main(){

int A,B,timer,clock=0,base=0,C=0,D=0;

for(;;){
scanf("%d",&timer);

if(timer == 0) break;

do{
 scanf("%d%d",&A,&B);
    C+=A;
    D+=B;
    base++;
}while(timer>base);
 base = 0;
 clock++;

 printf("Teste %d\n",clock);
 if(C>D){
    printf("Aldo\n\n");
 }else printf("Beto\n\n");
A=0;
 B=0;
 C=0;
 D=0;
}
return 0;
}
