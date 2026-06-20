#include<bits/stdc++.h>
using namespace std ;


int main (){
    int t ; 
    cin>> t  ; 
    while(t--){
       int n ; 
       cin>>n ; 
       vector<int> v(n);
       for(int  i = 0 ; i< n ; i++){
        cin>>v[i];
       }
       sort(v.begin(),v.end());
       vector<int> v2(n);
       int sum=0;
       for(int i = n-1 ; i>=0;i--){
        if(v[i]==v[i-1]){

            v.insert(v.begin(),v[i-1]);
            v.erase(v.begin()+i);
            continue;
        }
        sum+=v[i];
        v2[i]=sum;
       }
       for(int i = n-1 ; i>=0;i--){
     cout<<v[i]<<" ";
       }

     
    }
return 0 ;

}



