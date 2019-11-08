#include <stdio.h>
#include <string.h>
int main(){
int n,m,a,k,ont=0,auxk=0,auxm=0,auxa=0;
scanf("%d%d%d%d",&n,&m,&a,&k);
char sen[1001];
scanf("%s", sen);
ont=strlen(sen);

for(int i=0;i<ont;i++){
    if(sen[i]=='0'||sen[i]=='1'||sen[i]=='2'||sen[i]=='3'||sen[i]=='4'||sen[i]=='5'||sen[i]=='6'||sen[i]=='7'||sen[i]=='8'||sen[i]=='9'){
        auxk++;
    }else if(sen[i]=='a'||sen[i]=='b'||sen[i]=='c'||sen[i]=='d'||sen[i]=='e'||sen[i]=='f'||sen[i]=='g'||sen[i]=='h'||sen[i]=='i'||sen[i]=='j'||sen[i]=='k'||sen[i]=='l'||sen[i]=='m'||sen[i]=='n'||sen[i]=='o'||sen[i]=='p'||sen[i]=='q'||sen[i]=='r'||sen[i]=='s'||sen[i]=='t'||sen[i]=='u'||sen[i]=='v'||sen[i]=='x'||sen[i]=='y'||sen[i]=='w'||sen[i]=='z'){
        auxm++;
    }else if(sen[i]=='A'||sen[i]=='B'||sen[i]=='C'||sen[i]=='D'||sen[i]=='E'||sen[i]=='F'||sen[i]=='G'||sen[i]=='H'||sen[i]=='I'||sen[i]=='J'||sen[i]=='K'||sen[i]=='L'||sen[i]=='M'||sen[i]=='N'||sen[i]=='O'||sen[i]=='P'||sen[i]=='Q'||sen[i]=='R'||sen[i]=='S'||sen[i]=='T'||sen[i]=='U'||sen[i]=='V'||sen[i]=='X'||sen[i]=='Y'||sen[i]=='W'||sen[i]=='Z'){
        auxa++;
    }
}
if(auxk>=k && auxa>=a && auxm>=m&&n<=ont){
    printf("Ok =/");
}else printf("Ufa :)");

return 0;
}