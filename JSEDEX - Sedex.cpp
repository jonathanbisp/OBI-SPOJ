#include <stdio.h>

int main(void){
int dia, larg, alt, prof;

scanf("%d",&dia);
scanf("%d%d%d", &larg, &alt, &prof);
if(dia <= larg && dia <= alt && dia <= prof){

printf("S\n");
} else {
	printf("N\n");
}
return 0;
}