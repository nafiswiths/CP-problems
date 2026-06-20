#include<bits/stdc++.h>
using namespace std ;


int main (){
int s, n ; 
cin>>s>>n;
vector<pair<int , int >> dra(n);
for(int i = 0 ; i < n ; i++){
    cin>>dra[i].first>>dra[i].second;
}
// for(int i = 0 ; i < n ; i++){
//     cin>>dra[i].second ;
// }
sort(dra.begin(),dra.end());
int ans = 1 ;
for(int i = 0 ;  i <n ; i++){
    if(s <= dra[i].first){
        ans = 0 ; 
        break; 
        
    }
    else {
        s = s + dra[i].second;
    }
}
if(ans)
cout<<"YES"<<endl;
else 
cout<<"NO"<<endl;


return 0 ;

}



