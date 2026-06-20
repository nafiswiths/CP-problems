#include<bits/stdc++.h>
using namespace std ;

int main(){
int t ; 
cin>>t;
while(t--){
    int n  , q  ;
    cin>>n>>q ; 
    vector<int > v(n);
    int f=100000 , l=-1 ;

    for(int i= 0 ; i< n ; i++){
        cin>>v[i];
        if(v[i]==1 ){
          f=min ( f , i );
          l = max(l,i);

        }
}

q >=(l-f+1 )?cout<<"YES"<<endl:cout<<"NO"<<endl;



}
    return 0;
}