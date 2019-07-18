#include <stdio.h>

int main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}

for(int i=0;i<n;i++){
if(n==1)printf("%d\n",a[i]);
else if(i==0) printf("%d\n",a[i] + a[i+1]);
else if(i<=n-2) printf("%d\n",a[i] + a[i+1] + a[i-1]);
else if(i<=n-1) printf("%d\n",a[i] + a[i-1]);
}
return 0;
}