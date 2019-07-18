#include <stdio.h>
#include <math.h>
int main(){
int m=0,n,tot=0;
int a,b,c,d;
scanf("%d",&n);

while(m<n){
    scanf("%d%d%d%d",&a,&b,&c,&d);
    tot+=(abs(a-c)*abs(a-c))+(abs(b-d)*abs(b-d));
        m++;

}

printf("%d",tot);
return 0;
}
