#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {5, 2, 3, 1};
sort(v.begin(),v.end());
cout<<v[0]<<" ";
v.erase(v.begin()); // v = {2, 3}
for(int i = 0 ; i < v.size();i++){
    cout<<v[i]<<",";
}
cout<<endl;
v.insert(v.begin(),0);

for(int i = 0 ; i < v.size();i++){
    cout<<v[i]<<endl;
}

    return 0;
}
