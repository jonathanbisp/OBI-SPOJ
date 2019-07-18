#include <stdio.h>

int main(){
int clock,base=0,totreg,tot=0,a;
scanf("%d%d",&clock,&totreg);
while(clock>base){
    scanf("%d",&a);
    totreg+=a;
if(tot==0) tot=totreg;
if(tot>totreg)
    tot=totreg;
base++;

}
    printf("%d",tot);
return 0;
}