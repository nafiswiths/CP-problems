
        
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin>>t;
    while(t--){
        int n;
        map < int , int > ocr ; 

        cin>>n; 
       

    for(int  i = 0 ;i<n ;i++){
        int x ; 
        cin>>x ; 
        ocr[x]++;
    }
    if(ocr.size() >= 3 )cout<<"No\n";
else {
    if(abs(ocr.begin()->second-ocr.rbegin()->second) <= 1  ){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
}
        
    }
    return 0;
}
