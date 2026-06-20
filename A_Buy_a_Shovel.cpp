#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){
ll k ,r ; 
cin>>k>>r;
ll n=1 ;
while(n<=10){
if((n*k)%10 == 0 ){
    cout<<n<<endl;
    break;
}
else if((n*k-r)%10 == 0){
      cout<<n<<endl;
    break;
}
n++;
}


}