#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ; 
    cin>> t ; 
    while(t--){
        int n1 , n2 ;
        string str , sub ;
        cin>>n1 >> n2 ;
        cin>>str >> sub ;
        bool ans =false  ;
        int count = 0 ;  
        while(1){
            if(count > 5){
                ans = false;
                break ;
            }
            if(str.find(sub)!= string :: npos){
                ans = true;
                break ;
            }
            str += str ;
            count++ ;
        }
        if(ans){
            cout<<count<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0 ;
}