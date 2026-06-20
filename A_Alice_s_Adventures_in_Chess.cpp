#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ; 
    cin>> t ; 
    while(t--){
        int n , a,b ;
        string str  ;
        cin>>n >> a>>b ;
        cin>>str;
        bool ans =false  ;
        int x = 0 ,y=0;  
        for(int i = 0 ; i<1000; i++){
            char move = str[i%n];
            if(move == 'N'){
                y+=1;
            }
            else if(move == 'W'){
                x-=1;
            }
            else if(move == 'E'){
                x+=1 ;
            }
            else if(move == 'S'){
                y-=1;
            }
            if(x == a && y==b){
                ans = true;
                break ;
            }
            
            
        }
        if(ans){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0 ;
}