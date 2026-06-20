#include <iostream>
#include <string>
using namespace std ;
int main (){
int x ,y ,b;
cin >> x >> y;
for(int  i  = 1 ; ;i++){
    x=x*3;
    y=y*2;
    if(x>y){b=i;
        break;
    }
}
cout<<b<<endl;
 return 0;
}