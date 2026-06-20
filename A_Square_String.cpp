#include<bits/stdc++.h>
using namespace std ;
#define f for(int i = 0 ; i < t ; i++);
int main (){
    int t ;
    cin>>t ; 
    while (t--){
        string str ; 
        cin>>str ;
int mid = str.size()/2;
        string sub1=str.substr(0,mid);
        string sub2=str.substr(mid);
       // cout <<sub1<<sub2<<endl;
        if(sub1 == sub2){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    
    
    return 0;
}