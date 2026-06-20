#include <bits/stdc++.h>

using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long  n;
        cin >> n;
        vector <long > v ;
     map<int , int > mp;
;
        for (long long i = 0; i < n; i++) {
            long long  x;
            cin >> x;
            mp[x]++;
        }
        int x =mp.begin()->second;
        int arab[x];
        if(mp.size()==1){
            cout<<-1<<endl;
        }
        
        else{
            cout<<x<<" "<<n-x<<endl;
            int  el = mp.begin()->first;
            for(int i = 0 ; i< x;i++){
                cout<<el<<" ";
            }
            cout<<endl;
            mp.erase(el);
            for(auto p:mp){
                for(int i = 0 ; i<p.second;i++){
                    cout<<p.first<<" ";
                }
                
            }
            cout<<endl;


        }
        
    }
    
    return 0;
}
