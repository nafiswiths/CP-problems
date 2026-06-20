#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){
    int t ;
    cin>>t;
    while(t--){
       int   n ;
       cin>>n;
       vector<int> v1(n);
       
       for(int i = 0 ; i<n ; i++){
        cin>>v1[i];
       }
       
       if(is_sorted(v1.begin(),v1.end())){
        cout<<n<<endl;
       }
       else{
        cout<<1<<endl;
       }
    }




}