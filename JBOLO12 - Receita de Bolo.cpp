#include <stdio.h>

int main(void){
int xic, ovos, leit;
int a,b,c;
scanf("%d%d%d",&xic,&ovos,&leit);
a = xic/2;
b = ovos/3;
c = leit/5;

	if(a<2 && b<3 && c<5){
	printf("0");
	}else if(a <= b && a <= c){
		printf("%d",a);
	}else if (b <= a && b<= c){
		printf("%d",b);
	}else if (c <= a && c <= b){
		printf("%d",c);
	}else{
		printf("%d",a);
}
return 0;
}