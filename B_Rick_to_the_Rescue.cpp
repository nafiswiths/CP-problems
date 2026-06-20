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
       if(n<3){
        if(n==1){
            cout<<2<<endl;
            continue;
        }
        else if(n==2){
            cout<<1<<endl;
            continue;
        }
       }
       else{
      
        if(n%3 == 0){

        cout<<n/3<<endl;
        }else{
            ll ans ;
               ll f=n/2;
                 ll rem2 = (n%2) ;
                  if(rem2==1){
                  f=f+2;
                 }
                 ll t=n/3;

         if((n+1)%3==0){
            ll y = (n+1)/3;
          t= y+2;
        }
        else if((n+2)%3 == 0){
            ll r= (n+2)/3;
           t=r+1;
        }
        ans=min(t,f);
        cout<<ans<<endl;
       }}
    //    if(n%3 == 0){
    //     cout<<n/3<<endl;
    //    }
    //    else{
    //     ll t = n/3;
    //     ll rem= (n%3+3)%3;
    //      ll f=n/2;
    //      ll rem2 = (n%2+2)%2 ;
    //     if(rem==1){
    //        t=t+2;
    //     }
    //     else if(rem==2){
    //         t=t+1;
    //     }
        
           
            
    //         if(rem2==1){
    //        f=f+2;
    //     }
       
    //     ll ans =min(t,f);
        
    //     cout<<ans<<endl;
    // }

       }
    }

