#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;

    int s;
    cin >> s;
    while(s--) {
       ll n ;
       cin>>n;
       ll ans ,t1,t2,r1,r2;
       if(n%3==0){
        t1=n/3;
       }
       else{
        t1=n/3;
        r1=n%3 ;
        if(r1==1){
            t1=t1+2;
        }else{
            t1=t1+1;
        }
    }
    t2=n/2;
    r2=n%2;

    if(r2==1){
            t2=t2+2;
        }
   

      cout<<min(t1,t2)<<endl;
       
  

       }
    }

