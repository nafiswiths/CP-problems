#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
int n ; 
cin>>n;
vector<int>programmer ;
vector<int> math;
vector <int> pe;
for(int i = 0 ; i < n ; i++){
    int skill;
    cin>>skill;
    if(skill==1){
        programmer.push_back(i+1);
    }
else if (skill == 2 ){
    math.push_back(i+1);
}
else {
    pe.push_back(i+1);
}
}
int team = min ({programmer.size(),math.size(),pe.size()});
cout<<team<<endl;
for(int i = 0 ; i<team;i++){
    cout<<programmer[i]<<" "<<math[i]<<" "<<pe[i]<<endl;
}

    return 0 ;
}