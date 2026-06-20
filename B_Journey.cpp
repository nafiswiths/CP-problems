#include <bits/stdc++.h>
using namespace std;
int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        int n,a,b,c,cnt=0,add=0; 
        cin >> n>>a>>b>>c ; 
        long long sum = a+b+c;
        int f = n-(n%sum);
        int ans = n%sum;
       int x = a ;
       while(add<ans){
        add+=x;
        cnt++;
        if(x==a){
            x=b;
        }
        else if(x==b){
            x=c;
        }
        else{
            x=a;
        }       }
 
        
        int k = ((f/sum)*3)+cnt;
        if(k==0){
            k=1;
        }
        cout<<k<<endl;
    }
}