

#include<bits/stdc++.h>
using namespace std ;


int main (){
    string name ;
    getline(cin,name);

  
for(int i =0 ; i<name.size();i++){
    if(name[i]=='H' ||name[i]=='Q' ||name[i]=='9'  ){
        cout<<"YES"<<endl;
        return 0;
    }


}
cout<<"NO"<<endl;

return 0 ;

}



