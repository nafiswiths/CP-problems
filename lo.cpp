#include<bits/stdc++.h>
using namespace std ;
using ll = long long ; 
int main(){

    int t ; 
    cin>>t;
    while(t--){
    int  m ; 
    cin>>m;
   int maks = 0 , ans = 0 ;
    vector<int> v(m);
    unordered_map <int , int> ma;
    for(int i = 0 ; i < m ; i++){
        cin>>v[i];
        ma[v[i]]++;
        if(ma[v[i]]> maks){
            maks =ma[v[i]];
        }
    }
    if(ma.size()==1){
        cout<<m<<endl;
        continue;
    }
   int cnt=0;
    while(maks != 0 ){
        cnt= 0 ;
        for( auto x: ma){
            if(x.second >= maks ){
                cnt+=maks;
                ans=max(ans ,cnt);
            }

        }
        maks--;
    }
    cout<<ans<<endl;
   
    
    
}
        
    }


    







