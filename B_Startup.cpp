#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        unordered_map<int, int > brand_costs;
        vector<int> v ;
        
        for (int i = 0; i < k; i++) 
        { 
            int brand, cost;
            cin >> brand >> cost;
            
            brand_costs[brand]+= cost ;
            
            
        }
        for(const auto& pair: brand_costs){
            v.push_back(pair.second);
        }
        
      
    sort(v.begin(),v.end(),greater<int>());
    int sum = 0;

    for(int i = 0 ; i<  min(n, (int)v.size()) ;i++)
    {
        sum+= v[i];
    }
    cout<<sum<<endl;
    }
    return 0;
}
