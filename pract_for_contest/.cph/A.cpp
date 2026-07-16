#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool func(vector<long long> a, vector<long long> b){
    if(a[1]!=b[1]) return a[1]>b[1];
    if(a[2]!=b[2]) return a[2]<b[2];
    return a[0]<b[0];
}

int main() {
    int n;
    cin>>n;

    vector<vector<long long>> v(n, vector<long long>(3));

    for(int i=0;i<n;i++)
        cin>>v[i][0]>>v[i][1]>>v[i][2];

    sort(v.begin(),v.end(),func);

    for(int i=0;i<n;i++)
        cout<<v[i][0]<<"\n";

    return 0;
}