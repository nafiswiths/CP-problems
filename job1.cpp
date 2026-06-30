//You will be given n jobs with their starting and ending time. Find  
// maximum number of jobs that can be done by a single person.
// Sample
// Input: 3   10 20   20 30   12 25 Sample Output: 2 jobs can be done. 
#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 int n  ;
cin >> n ;
vector<pair<ll,ll>> v(n) ;
for(int i = 0 ; i < n ; i++){
    cin >> v[i].first >> v[i].second ;
}
sort(v.begin(),v.end(),[](auto a , auto b){
    return a.second<b.second ;
});
int cnt = 1;
int las = v[0].second ;
for(int i = 1 ; i < n ; i++){
    if(v[i].first >= las){
        cnt++ ;
        las = v[i].second ;
    }
    

}
cout<<cnt<<endl ;
}