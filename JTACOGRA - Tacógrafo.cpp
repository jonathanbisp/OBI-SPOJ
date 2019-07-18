#include <stdio.h>

int main(){
int a,b,clock,base=0,tot=0;
scanf("%d",&clock);
while(clock>base){
    scanf("%d%d",&a,&b);
    tot+=a*b;
    base++;
}
printf("%d",tot);
return 0;
}
