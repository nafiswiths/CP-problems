// #include <bits/stdc++.h>
// using namespace std;
// int main(){
     
//     int  n , pl =1 ;
//     cin>>n;
//     vector <int> arra;
    
//     while(n--){
//         int f;
//     cin>>f;
//     while(f--)
//     {
//         arra.push_back(pl);
    
        
//     }
//     pl++;
//     }
    
    
//     int jc ;
//     cin>>jc;
//     while(jc--){
//         int r ;
//         cin>>r;
//         cout<<arra[r-1]<<endl;
//     }
//     return 0 ;
// }
  
#include <bits/stdc++.h>
using namespace std;
int main(){
     
    int  n , sum = 0  ;
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
   cout<<an+1<<endl;
   }
    
    
    return 0 ;
}
  
