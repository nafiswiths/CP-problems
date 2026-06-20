#include<bits/stdc++.h>
using namespace std ;
int main (){
    int t ; 
    cin>>t ;
    long long ara[t];
    for(int i = 0 ; i < t ; i++){
        cin>>ara[i];
    }
    long long maxN = ara[0],ans=1;
    
for(int i = 1 ; i < t ; i++){
    if(ara[i]>maxN){
        maxN=ara[i];
        ans=i+1;

    }
}
cout<<ans<<endl;
return 0 ;

}





