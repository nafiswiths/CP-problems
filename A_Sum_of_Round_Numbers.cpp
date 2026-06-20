
#include<bits/stdc++.h>
using namespace std ; 
int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        int n ; 
        cin>>n;
       
        vector<int> v,v2;
        int i  = 1 ;
        int x ;
        while(n!= 0 ){
            x=n%10;
            if(x!= 0){
                v.push_back(x*i);
            }
            i*=10;
            n=n/10;
            
        }
        
        
        cout<<v.size()<<endl;
       for(int i = 0 ; i< v.size();i++){
        cout<<v[i]<<" ";
       }
       cout<<endl;
       
    }
}
