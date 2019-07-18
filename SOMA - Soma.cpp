#include <stdio.h>

int main(){
int a,x,t=0;
scanf("%d",&a);
for(int i=0; i<a;i++){
    scanf("%d",&x);
    t+=x;
}
printf("%d", t);
return 0;
}
