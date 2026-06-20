#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main(){
    

    int t;
    cin >> t;
    while (t--) {
        ll n;
        ll h, k;
        cin >> n >> h >> k;
        vector<ll> a(n);
        ll sum =  0 ; 
        for (int i = 0; i < n; i++) {cin >> a[i];
            sum+=a[i];
        }
        ll div= h/sum;
        if(h%sum==0){
            
            cout<<(div*n)+(div-1)*k<<endl;
        }
        else{
            ll ans = div*(n+k);
            ll rem=h%sum;
            vector<ll> pref(n,0);
          
            vector<ll> mx(n,0);
            vector<ll> mn(n,0);
            pref[0]=a[0];
            mn[0]=a[0];
            for(int i = 1 ;i<n ; i++){
                pref[i]=pref[i-1]+a[i];
                mn[i]=min(a[i],mn[i-1]);
                
            }
            mx[n-1]=a[n-1];
            for(int i = n-2; i>=0;i--){
                mx[i]=max(mx[i+1],a[i]);
            }

            int cnt= 0 ;
        
                for(int i =0 ; i < n ;i++){
                    cnt++;
                    if(mn[i]<=mx[i+1]){
                    if((pref[i]-mn[i] + mx[i+1])>=rem){
                        ans=ans+cnt;
                        break;
                    }}
                    else{
                        if(pref[i]>= rem){
                            ans=ans+cnt;
                            break;
                        }
                    }
              
            }
            cout<<ans<<endl;

        }
    }
}