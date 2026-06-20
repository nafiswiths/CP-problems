#include<bits/stdc++.h>
using namespace std ;

int main(){
int t ; 
cin>>t;
while(t--){
    int n  , q  ;
    cin>>n>>q ; 
    vector<int > v1(n),v2(n+1,0);
    int sum =0;
    for(int i= 0 ; i< n ; i++){
        cin>>v1[i];

        v2[i+1]=v2[i]+v1[i];



    }
    for(int i = 0 ; i< q ; i++){
        int  l , r , k ; 
        cin>>l>>r>>k;
        int ans = ((r-l+1)*k) +(v2[n]-(v2[r]-v2[l-1]))
        ;
        if(ans%2==0){
            cout<<"NO"<<endl;

        }
        else{
            cout<<"YES"<<endl;
        }


    }


}
    return 0;
}