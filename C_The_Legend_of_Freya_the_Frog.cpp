#include<bits/stdc++.h>
using namespace std ; 
int main(){
    int t ; 
    cin>>t ;
    while(t--){
        int x, y , k ; 
        cin>>x >> y >> k;
       int x_step=(x+k-1)/k;
       int  y_step=(y+k-1)/k;
       if(x_step > y_step){
        y_step = x_step-1;
        cout<<x_step+ y_step<<endl;
       }
       else if(x_step < y_step){
        x_step = y_step ;
         cout<<x_step+ y_step<<endl;
       }
       else{
        cout<<x_step+ y_step<<endl;
       }}
    return 0 ; 
}