#include <bits/stdc++.h>
using namespace std;
int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        int n ; 
        cin >> n ; 
        int ara  [n], zr= 0,one=0,mx=0,cnt=0,ans=-1,dis=INT_MAX ,k;
        for(int i  = 0; i < n ; i++){
            cin>>ara[i];
            if(ara[i]==0){
                zr++;
            }    
        }
        k=n-zr;
        for(int i  = 0; i < n ; i++){ans=2;
            int l = (i+1)/2 , r=(n-i +1)/2 ;
            if(cnt >= l && k-one>= r ){ ans=9;
                int d=abs(n/2-i);
                if(d<dis){
                    dis=d;
                    ans=i;
                }
               
               
            }
           
            if(ara[i]==0){
               cnt++;
            }
            else{
                one++;
            }
           
        }
       
        cout<<ans<<endl;
       
    }
}