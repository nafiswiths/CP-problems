#include <bits/stdc++.h>
using namespace std;

int main() {
   int n ; 
   cin>>n ;
    vector<int> v(n);
    for(auto &x : v)cin>>x;
    int sum1= 0 , sum2 = 0 ;
    int l=0 ,r=n-1;
    int i = 0 ;

    while(l<=r){
        if(i%2==0){
        if(v[l]>v[r]){
            sum1+=v[l];
            l++;
        }else{
            sum1+=v[r];
            r--;
        }
        }
        else{
            if(v[l]>v[r]){
            sum2+=v[l];
            l++;
        }else{
            sum2+=v[r];
            r--;
        }
        }
        i++;
    }
    cout<<sum1<<" "<<sum2<<endl;

    
        
}