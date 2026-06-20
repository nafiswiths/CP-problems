#include <bits/stdc++.h>
using namespace std;
int main(){
     
    int  n , sum = 0 ; ;
    cin>>n;
    vector <int> arra;
    
    while(n--){
        int f;
    cin>>f;
    sum+=f;
        arra.push_back(sum);   
    }
    int  k ;
    cin>>k;
    while(k--){
        int g ; 
        cin>>g;
    auto it=lower_bound(arra.begin(),arra.end(),g);
   int an = it-arra.begin();
   cout<<an+1;}
    
    
    return 0 ;
}
  
