#include <stdio.h>

int main(void){
int a,b,c;

scanf("%d%d",&a,&b);
if(a==0 && b == 0){
	printf("C");
	} else if(a==0 && b==1){
	printf("C");
	} else if(a==1 && b==0){
	printf("B");
	}else {
	printf("A");
}
return 0;
}