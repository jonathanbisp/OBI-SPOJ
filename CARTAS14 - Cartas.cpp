#include <stdio.h>

int main(void){

int a,b,c,d,e;
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
if(a<b && b<c && c<d && d<e){
	printf("C");
}else if(a>b && b>c && c>d && d>e){
	printf("D");
}else printf("N");

return 0;
}