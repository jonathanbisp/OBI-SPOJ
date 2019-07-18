#include <stdio.h>

int main(void){

int a;

scanf("%d",&a);

if(a<=10){
	printf("7");
}else if(a<=30){
	printf("%d",7 + a-10);
}else if (a<=100){
  printf("%d",27+ (a-30)*2);
}else printf("%d",167 + (a-100)*5);

return 0;
}