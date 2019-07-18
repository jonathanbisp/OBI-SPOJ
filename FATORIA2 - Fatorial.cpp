#include <iostream>

using namespace std;

int main(){
int a,b;
cin>>a;
b=a;
if(a==0||a==1){
cout<<1;
return 0;
}else while(b>1){
a=a*(b-1);
b--;
}
cout<<a;
return 0;
}
