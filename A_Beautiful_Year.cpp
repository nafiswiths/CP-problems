#include<bits/stdc++.h>
using namespace std;

 bool notAllEqual(int n){
    vector<int> fq(10,0);
    while(n>0){
        int k=n%10;
        fq[k]++;
        if(fq[k]>1){
            return false;
        }
        n=n/10;
    }
    return true;
}


int main(){
    int n;
    cin >> n;
    int p = ++n;
   while(1){
    
    if(notAllEqual(p)){
        cout<<p<<endl;
        break;
    }
    p++;
   }
}
