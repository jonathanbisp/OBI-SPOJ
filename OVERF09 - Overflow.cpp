#include <stdio.h>

int main(void){
int num1,num2,num3;
char l1,l2,l3;
scanf("%d%d%c%c%c%d",&num1,&num2,&l1,&l2,&l3,&num3);
if(l2 == '+'){
    if(num1 >= num2 + num3)
            printf("OK");
    else
        printf("OVERFLOW");
}else if(l2 == '*'){
    if(num1 >= num2 * num3)
            printf("OK");
    else
        printf("OVERFLOW");
}
return 0;
}
