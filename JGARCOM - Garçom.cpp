#include <stdio.h>

int main(){
int clock,base=0,a,b,tot=0;
scanf("%d",&clock);

while(clock>base){
    scanf("%d%d",&a,&b);
    if(a>b){
        tot+=b;
    }
    base++;
}
printf("%d",tot);
return 0;
}
