#include <bits/stdc++.h>

using namespace std;
int uni(int x ){
    string k = to_string(x);
    set<char> ss;
    for(auto v: k){
        ss.insert(v);
    }
    if(ss.size()==4)
    return 1 ;
    else 
    return 0 ;
}

int main() {
    int x;
    cin >> x;
  set<int> s ;

while(1){
x=x+1;
if(uni(x)){
    cout<<x<<endl;
    break ; 
}
}
    return 0;
}
