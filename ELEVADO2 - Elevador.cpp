#include <stdio.h>

int main(){

int clock,base=0,inicio=0,capmax,ent,sai;
char tot='N';
scanf("%d%d",&clock,&capmax);

while(clock>base){
  scanf("%d%d",&sai,&ent);
  inicio+=-sai+ent;
  if(inicio>capmax)
    tot='S';
    base++;
}
printf("%c",tot);
return 0;
}
