#include<bits/stdc++.h>
using namespace std ;
int main(){

    
    long long  n ,m; 
    cin>>n ; 
    vector <long long> v(n+1);
     vector <long long > p(n+1,0);
    

    for (int i = 1 ;  i<=n ; i++){
        cin>>v[i];
          p[i]= p[i-1]+v[i];

    }
    cin>>m;
    vector<long long > w(m+1);
    for(int i =1 ; i <=m ; i++ ) cin>>w[i];
     for(int i =1 ; i <=m ; i++ ) {
        int ans = lower_bound(p.begin()+1,p.end() , w[i])-p.begin() ;
        cout<<ans<<endl;
     }
    
    
   
        
    }


    







