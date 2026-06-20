#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;

    int s;
    cin >> s;
    while(s--) {
       ll n , x , p1 , p2 ;
       cin>>n>>x>>p1>>p2;
       ll  ans =0 ; 
       vector<ll> v(n);
       for(auto &x :  v)cin>>x;
       sort(v.begin(),v.end());
     
       if(p1<=p2){
             ans=n*p1;
       }
       else if(p2<p1){
        if(n<2){
            ans=p2;
            
        }
        else{
         ll i =0 ,j=1;
         

       while(i<n){
       
        if(i==n-1){
            ans+=p1;
            break;
        }
       if((v[i]+v[j]) <= x){
        ans+=(2*p2);

        i+=2;
       j+=2;

       }
       else{
        
        ans +=p1;
         i++;
       j++;
        }
       }}
       

    }

       
       
       cout<<ans<<endl;
    }
       }

    

