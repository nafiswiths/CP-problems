#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;
vector <int>ara (n);
for(int i = 0 ; i<n ;i++){
    int x;
    cin>>x;
    ara[i]=abs(x);
}
sort(ara.begin(),ara.end());
cout<<abs(ara[0])<<endl;
  




    return 0;
}
