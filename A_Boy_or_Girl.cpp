#include <iostream>
#include <string>
#include <set>
using namespace std ;
int main (){
string name ;
cin>>name ;
set<char> un;
int size = name.size();
for(int i = 0;i<size;i++){

un.insert(name[i]);

}
int s = un.size();
if(s %2 == 0){
    cout<<"CHAT WITH HER!"<<endl;
}
else{
    cout<<"IGNORE HIM!"<<endl;
}
 return 0;
}