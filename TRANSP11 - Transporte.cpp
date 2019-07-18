#include <stdio.h>

int main(void) {
int a,b,c;
int x,y,z;
int k,l,m;
scanf("%d%d%d", &a,&b,&c);
scanf("%d%d%d", &x,&y,&z);

k = x/a;
l = y/b;
m = z/c;

printf("%d", k*l*m);
return 0;
}