#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;

    int ans=0;

    for(int i=0;i<a.size();i++){
        int x=abs(a[i]-b[i]);
        ans+=min(x,10-x);
    }

    cout<<ans;

    return 0;
}