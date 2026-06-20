#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; 
    cin>>t;
    while(t--){
    int n ; 
    cin>>n;
    vector<int> v(n);
    int other = 0;
   
    for(int i= 0  ; i <n ; i++){
        cin>>v[i];
        if(v[i]==67){
            other = 1 ; 
        }
        
    }
    if( other ==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    

}
}