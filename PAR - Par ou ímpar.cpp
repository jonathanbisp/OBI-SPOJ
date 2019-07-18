#include <stdio.h>
#include <string.h>

int main(void){
	int n,base=0,a,b,c;
	for(;;){
		scanf("%d",&n);
		if (n==0) break;
		char p1[11];
		char p2[11];
		scanf("%s%s", p1, p2);
		base++;
		printf("Teste %d\n",base);

	for(int i=0; i<n; i++){
		scanf("%d%d",&a,&b);
		c=a+b;
		if(c%2==0){
			printf("%s\n",p1);
		}else printf("%s\n",p2);

	}

printf("\n");
}
return 0;
}
