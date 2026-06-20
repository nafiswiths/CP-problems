#include<bits/stdc++.h>
using namespace std ; 
int main (){int t ;
cin>>t ; 
 pair <int , int > game [t];

for(int i = 0 ; i< t ; ++i){
    cin>>game[i].first>>game[i].second;
}
int count1= 0 ,  count2 = 0;
for(int i = 0 ; i< t ; ++i){
    if(game[i].first>game[i].second){
        count1++;
    }
    else if(game[i].first < game[i].second){
        count2++;
    }
    else {
        continue;
    }
}




/*int sum1 =0 ,sum2 = 0;
for(int i = 0 ; i< t ; ++i){
   sum1= sum1 + game[i].first;
}
for(int i = 0 ; i< t ; ++i){
    sum2 = sum2 + game[i].second;
}
*/
if(count1>count2){
    cout<<"Mishka"<<endl;

}
else if(count1 < count2 ){
    cout<<"Chris"<<endl;

}
else {
    cout<<"Friendship is magic!^^"<<endl;
}
    return  0 ; 
}