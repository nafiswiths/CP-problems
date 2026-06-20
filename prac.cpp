#include <bits/stdc++.h>
using namespace std;

int main() {
 
/*unordered_map<string , int > ms;
int n ; 
cin>>n ;
for (int i = 0 ; i< n ; i++){
string s ; 
cin>>s ; 
ms[s]=ms[s]+1;


}
int q ;
cin>>q ;
while(q--){
    string s;
    cin>>s;
    cout<<ms[s]<<endl;
}*/
set<string > s ;
int n ;
cin>>n ;
while(n--){
    string a ;
    cin>>a;
    s.insert(a);
}

for(auto val : s ){
    cout<<val;
}


    return 0;
}
