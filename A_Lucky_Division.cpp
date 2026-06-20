#include<bits/stdc++.h>
using namespace std;
bool ck(int n ){
    vector<int> dv;
    
    for(int i =1 ;i*i<= n ;i++){
        if(n%i==0){
            dv.push_back(i);
            if(i!= n/i){
                dv.push_back(n/i);
            }
        }
    }
    bool ans = false;
    for(int i = 0 ; i<dv.size();i++){
        int ans =1;
        while(dv[i]>0){
            int z= dv[i]%10;
            if(z!=4 && z!=7){
                ans=0;
                break;
            }
            dv[i]=dv[i]/10;
        }
        if(ans==1){
            return true;
            break;
        }
    }
    return false;

}
int main(){
    int n;
    cin >> n;
     string s  = to_string(n);
     int ok=1;
     int cn=0;
     for(int i = 0 ; i< s.size();i++){
        if(s[i]!='4' && s[i]!='7'){
            cn++;
        }
     }
     if(cn!=0){
        if(ck(n)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
     }
     else{
        cout<<"YES"<<endl;
     }

}
