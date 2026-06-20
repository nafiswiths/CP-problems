#include<bits/stdc++.h>
using namespace std;

int main(){

    int n1,n2;
    cin >> n1;

    vector<int> v1(n1);
    vector<int> fq1(102,0);

    for(int i = 0 ; i < n1; i++){
        cin >> v1[i];
        fq1[v1[i]]++;
    }

    cin >> n2;

    vector<int> v2(n2);
    vector<int> fq2(102,0);

    for(int i = 0 ; i < n2; i++){
        cin >> v2[i];
        fq2[v2[i]]++;
    }

    int cnt = 0;
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int i = 0 , j = 0 ;
    while(i<n1 || j<n2){
        if(abs(v1[i]-v2[j])<=1 ){
            cnt++;
            j++;
            i++;

            
            }
            else  if(v1[i]>v2[j]){
                j++;
            }
            else if(v1[i]<v2[j]){
                i++;
            }
            else{
                i++ ,j++;
                }
            }
        
        
    

    // for(int i = 0 ; i < n1; i++){
    //     int x = v1[i];

    //     if(fq2[x] > 0){
    //         fq2[x]--;
    //         cnt++;
    //     }
    //     else if(x > 1 && fq2[x-1] > 0){
    //         fq2[x-1]--;
    //         cnt++;
    //     }
    //     else if(x < 100 && fq2[x+1] > 0){
    //         fq2[x+1]--;
    //         cnt++;
    //     }
    // }

    cout << cnt << endl;
        }