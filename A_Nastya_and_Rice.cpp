#include <bits/stdc++.h>

using namespace std ;
int main (){
int t;
cin>>t;
while(t--){
    int n,a,b,c,d ;
    cin>>n>>a>>b>>c>>d;
    int l,h;
    l=n*(a-b);
    h=(b+a)*n;
    if((((c-d) <= l && (c+d) >= l) || ((c-d) <= h && (c+d) >= h)) ||
(((c-d) >= l && (c+d) <= h) || ((c-d) >= h && (c+d) <= h))
){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
  
}
 return 0;
}