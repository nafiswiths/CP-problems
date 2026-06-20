#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
   int t ; 
   cin>> t ; 
   while (t--){
    int a , b ; 
    cin>>a>>b ;
    int  ara [a];
    for(int i = 0 ; i<a ; i++){
        cin>>ara[i];
        }
        int have=0;
        int gave = 0;
        for(int i = 0 ; i<a ; i++){
        if(ara[i]>=b){
            have=have+ara[i];
        }
        else if(ara[i]==0){
        if(have>0){
            have--;
            gave++;}
        }
        
        }
       
       cout<<gave<<endl;
        
        }
   
   
    return 0;
}
