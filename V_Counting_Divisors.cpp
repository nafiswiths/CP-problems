#include <bits/stdc++.h>

using namespace std;


int main() {
    int x;
    cin >> x;
  while(x--){
    int n ;
    cin>>n;
    int c = 0 ; 
    for(int i = 2 ; i<= sqrt(n) ;i++){
        if(n%i==0) c++;
    }
    cout<<c+2<<endl;
  }
    return 0;
}
