#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; 
    cin>> t ; 
    while(t--){
        int n,count= 0  ; 
        cin >> n ;
        int ara[n];
        for(int i= 0 ; i < n ; i++){
            cin >>ara[i];
            if(ara[i]%2 != 0){
                count++;
            }
        }
        if(count%2 != 0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl; 
        }
    }
    return 0 ;
}