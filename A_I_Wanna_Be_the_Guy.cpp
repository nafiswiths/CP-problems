#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
int level ; 
cin>>level;
int arax[level],aray[level];

for(int i = 0 ; i< level ; i++){
cin>>arax[i];

}
for(int i = 0 ; i< level ; i++){
cin>>aray[i];

}
int k =1;
for(int i = 0 ; i< level ; i++){
if(arax[i]>=level || aray[i]>=level){

k=2;
}

}
if(k == 2)cout<<"I become the guy."<<endl;
else
cout<<"Oh, my keyboard!"<<endl;
    return 0 ;
}