#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n , k ; 
        cin>>n>>k ;
        int mat[n][n];
        for(int i = 0  ;  i < n ; ++i ){
            for(int j =0 ;j< n ; ++j){
                cin>>mat[i][j];
            }
            cout<<"\n";
        }
        int x = n/k;
        for(int i =k-1,count = 0 ;count < x ;i++,count++){
            for(int j = k-1 ,c= 0 ; c <x ;j++,c++ ){
                cout<<mat[i][j];
            }
            cout<<"\n";
        }
    }
    
    return 0;
}
