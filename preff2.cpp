#include<bits/stdc++.h>
using namespace std ;
int main(){

    
    int n,q ; 
    cin>>n >>q; 
    vector <long long> v(n+1);
     vector <long long > p(n+1,0);
    

    for (int i = 1 ;  i<=n ; i++){
        cin>>v[i];
          p[i]= p[i-1]+v[i];

    }

    
    while(q--){
        int x, y ;
        cin>>x>>y;
       
        cout<<p[y]-p[x-1]<<endl;
        
    }


    

}






