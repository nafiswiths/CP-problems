#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define iamspeed ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
typedef vector<int> vi;

void decode(){
    int n , k ;
    cin>>n>>k;
    int ans=0,pow,x ;
    if(k==1){
        ans = n ;

    }
    else{
        while(n>0){
             pow=1;
            while(pow*k<=n){
                pow=pow*k;
            }
            
            n=n-pow;
            ans++;
        }
        
    }
    cout<<ans<<endl;
    
}

int main (){
    iamspeed;
    int t ;
    cin>>t;
    while (t--) {
        decode();
    }
}