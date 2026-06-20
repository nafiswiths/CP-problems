#include<bits/stdc++.h>
using namespace std ;


int main (){
int n ;
cin>>n ; 
vector<int > ig(n);
int e=0,o=0;

for (int i = 0 ; i< n ; i++){
    cin>>ig[i];
  if(ig[i]%2 == 0){e++;}
  else {o++;}


}
int ans ;
if(o==1){
    for(int i = 0 ; i<n ; i++){
        if(ig[i]%2 != 0){
            ans = i+1;
        }
    }
}
else{for(int i = 0 ; i<n ; i++){
        if(ig[i]%2 == 0){
            ans = i+1;
        }
    }
    
}
cout<<ans<<endl;
return 0 ;

}



