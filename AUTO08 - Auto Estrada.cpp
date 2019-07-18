#include <stdio.h>

int main(void){
int n,tot=0;
scanf("%d",&n);
char estrada[n+1];
scanf("%s", estrada);
for(int i=0; i<n;i++){
if (estrada[i]=='P'){
tot+=2;
}else if (estrada[i]=='C'){
tot+=2;
}else if(estrada[i]=='A'){
tot+=1;
}
}
printf("%d",tot);
return 0;
}
