#include<bits/stdc++.h>
using namespace std;

 


int main(){
    int n,m,nn,mm;
    cin >> n>>m>>nn>>mm;
    int tot=0;
    if(mm < nn*m){
        int x=n/m;
        tot+=x*mm;
        int rem=n%m;
       int mx=min(mm,rem*nn);
       tot+=mx;
    }
    else{
        tot+=n*nn;
    }
   cout<<tot<<endl;
   }

