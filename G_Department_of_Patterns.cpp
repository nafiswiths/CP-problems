#include<bits/stdc++.h>
using namespace std ;


int main (){
    char name ;
    cin>>name ;
    int  r ;
    cin>>r;
    if(name=='A'){
for(int i =1 ; i<=r;i++){
    for(int j = 1 ; j<=i;j++){
        cout<<"*";

    }
cout<<endl;
}
    }
else if(name=='B'){
for(int i =0 ; i<r;i++){
    for(int j = 0 ; j< i;j++){
        cout<<" ";

    }
    cout<<string(r,'*');
cout<<endl;
}
}
else if(name=='D'){
for(int i =1 ; i<=r;i++){
    for(int j = 1 ; j<=r;j++){
        cout<<"*";

    }
cout<<endl;
}    
}    
else { 

for(int i =0 ; i<r;i++){
    for(int j = 0 ; j<r;j++){
        if(i==0 || i == r-1 || j == 0 || j==r-1){
        cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
cout<<endl;
}    



    
  /*cout << string(r, '*') << endl; 
    for (int i = 1; i <= r - 2; i++) {
        cout << "*"; 
        for (int j = 1; j <= r - 2; j++) {

            cout << " ";
        }
        cout << "*";  cout << endl; 
    }
    cout << string(r, '*') << endl;*/
}
return 0 ;

}



