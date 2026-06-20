
#include<bits/stdc++.h>
using namespace std ; 
int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        long long n , k,x ,mxx,mnn,tot; 
        tot=(n*(n+1))/2;
        mnn=(k*(k+1))/2;
        mxx=tot-(((n-k)*(n-k+1))/2);
        if(x<= mxx && mnn<=x){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
