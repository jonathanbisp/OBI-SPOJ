#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
int n,par=0,impar=0,tot;
char vrau[1001];
for(;;){
scanf("%s", vrau);

n=strlen(vrau);
if(n==1){
if(vrau[0] == '0') break;}
for(int i=0; i<=n;i++){
if(i%2==0){
par+= (vrau[i]-'0');
}else{
impar+=vrau[i]-'0';
}
}
if(n%2==0){
    par+=48;
}else{ impar+=48;}
tot=abs(par-impar);
if(tot%11==0) {
    printf("%s is a multiple of 11.\n",vrau);
}else {

printf("%s is not a multiple of 11.\n", vrau);
}
n=0;
par=0;
impar=0;
strcpy(vrau, "" );
tot=0;
}
return 0;
}
