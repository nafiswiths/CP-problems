#include <bits/stdc++.h>
using namespace std;

int main() {
 
map<string , int > ms;
int n ; 
cin>>n ;
for (int i = 0 ; i< n ; i++){
string s ; 
cin>>s ; 
if(ms.count(s)==0){
    ms[s]=1;
    cout<<"OK"<<endl;
}else{
ms[s]++;
string n = s+to_string(ms[s]-1);
cout<<n<<endl;
}

}






    return 0;
}
