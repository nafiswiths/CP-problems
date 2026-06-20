#include<bits/stdc++.h>
using namespace std ;
#define f for(int i = 0 ; i < t ; i++);
string s(int n ){
     string  v = "aeiou" ; 
     return(v+v+v+v+v+v+v+v+v+v).substr(0,n);
}
int main (){
    int t ;
    cin>>t ; 
    while (t--){
       
     int n ; 
     cin>>n;
if(n == 2){
    cout<<"uo"<<endl;
}
if(n == 3){
    cout<<"iae"<<endl;
}
if(n == 6){
    cout<<"oeiiua"<<endl;
}
    }
    
    
    return 0;
}