#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;

int main() {
    
        string num ;
        cin>>num;
        int ans = 0;
        for(int i = 0 ; i< num.size();i++)  {
            if(num[i]=='7'){
                ans=1 ;
                break;
            }
        }
        if(ans){
             cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    return 0;
}
