#include<bits/stdc++.h>
using namespace std ;

void snake(int r , int  c ){

for(int i = 0 ; i < r ; ++i){
if(i%2 == 0 ){
cout<<string(c,'#')<<"\n";
}
else{
if((i/2)%2 == 0){
    cout<<string(c-1,'.')<<"#"<<endl;
}
else{
    cout<<"#"<<string(c-1,'.')<<endl;
}
}
}
}

int main (){
int r, c ; 
cin>>r>>c;
snake(r,c);

return 0 ;

}






