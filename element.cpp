#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int n , k ;
    cin>>n>>k ;
    int ara[n];
    for(int i = 0 ; i< n ; i++){
        cin>>ara[i];
    }
    sort(ara,ara+n);
    int sum = 0 ,count= 0 ;
    for(int i = n-1 ;i>=0;--i){
        if(count == k){
            break ; 
        }
        sum+=ara[i];
        count++;
    }
    cout<<count<<endl;
    return 0;
}
