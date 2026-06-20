#include <iostream>
#include <string>
using namespace std ;
int main (){
string add;
cin>>add;
int i , j;
for (i=0;i< add.size();i+=2){
    for (j=0;j < add.size()-1;j+=2){
    if(add[j]>add[j+2]){
        swap(add[j],add[j+2]);
    }
    }
}

cout<<add<<endl;

 return 0;
}