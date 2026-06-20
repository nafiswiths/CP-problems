#include<bits/stdc++.h>
using namespace std ;


int main(){
int t ; 
cin>>t;
while(t--){
    
  int  n , m , x ,y ;
  cin>>n >> m >> x>>y;
  if(n != x && y!= 1){
    cout<<n <<" "<<1<<" "<<m<<" "<<m<<endl;
  }
  else{
      cout<<m <<" "<<1<<" "<<n<<" "<<n<<endl;
  }
 
 
}
    return 0;
}