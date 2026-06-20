#include <bits/stdc++.h>
using namespace std;

int main() {
 
int t ;
cin>>t ;
while(t--)
{
    int  n , k ;
    cin>>n>>k;
    vector <int > v (n);
    int ans = 0 ; 
 
    for(int i = 0 ; i<n ;i++){
        cin>>v[i];
        if(v[i]==k){
            ans =1 ;
        }
    }
    
    


if(ans){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}



    return 0;
}
