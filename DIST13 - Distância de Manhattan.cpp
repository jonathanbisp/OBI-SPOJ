#include <iostream>
using namespace std;

int main(void){
int x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
if(x2-x1>=0){
    if(y2-y1>=0) cout<<("%d",(x2-x1)+(y2-y1))<<endl;
    else cout<<("%d",(x2-x1)+(y1-y2))<<endl;

}else{
    if(y2-y1>=0) cout<<("%d",(x1-x2)+(y2-y1))<<endl;
    else cout<<("%d",(x1-x2)+(y1-y2))<<endl;
}
return 0;
}
