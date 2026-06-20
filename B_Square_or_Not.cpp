#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
int  t ;
cin>>t;
while (t--){
int a ;
cin>>a;
string str;
cin>>str;
int n = sqrt(a);
if(a>4 && n*n == a && str[a/2+1]=='0'){
    cout<<"YES"<<endl;
}
else if(n*n == a ){
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}


}
    return 0 ;
}