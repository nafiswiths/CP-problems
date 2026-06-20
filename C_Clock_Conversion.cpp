#include<bits/stdc++.h>
using namespace std ; 
int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        string time ; 
        cin >> time ; 
        string sub = time.substr(0,2);
        int a = stoi(sub);
        if(a>12){
            a=a-12;
            int first ; 
            int second ; 
            second = a%10;
            a = a/10;
            first= a ;
            time[0]=first ;
            time[1]=second;
            if(a)
            cout<<time<<" PM"<<endl;

        }
        else if(a<12){
            cout<<time<<" AM"<<endl;
        }
       
    }
    return 0 ; 
}