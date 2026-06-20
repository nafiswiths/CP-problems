#include<bits/stdc++.h>
using namespace std ;

int main(){
int mat1[5][5]={
    {4,3,2,3,4},
    {3,2,1,2,3},
    {2,1,0,1,2},
    {3,2,1,2,3},
    {4,3,2,3,4}
};
int mat2[5][5];
int ans ;
for(int i = 0 ;i<5 ; i++){
    for(int j = 0 ;j <5;j++ ){
        cin>>mat2[i][j];
        if(mat2[i][j]==1){
            ans = mat1[i][j];
            break;

        }
    }
}
cout<<ans<<endl;


    return 0;
}