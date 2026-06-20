#include<bits/stdc++.h>
using namespace std ;


int main (){
    int t ; 
    cin>> t  ; 
    while(t--){
      string a , b ; 
      cin>>a>>b;
      int cnt=1,x=0;
      pair<int , int > p [a.size()];
      int u1= 0 ,u2=0;
 
      for(int i = 1 ; i< a.size()+1;i++ ){
        if (a[i] == a[i - 1]) {
            cnt++;
        } else {
            p[x].first= cnt ;
            u1++;

   
            cnt = 1;
            x++;
        }


     
    }
    // p[x].first=cnt;
    cnt=1;
    int x1=0;
      for(int i = 1 ; i< b.size()+1;i++ ){
        if (b[i] == b[i - 1] ) {
            cnt++;
        } else {
            u2++;
           p[x1].second=cnt ; 
            cnt = 1;
            x1++;
        }



     
    }
    // p[x].second=cnt ; 
    int ans = 1 ; 

    for(int i = 0 ; i< x ; i++){
        cout<<p[i].first <<" " <<p[i].second<<endl;
        if(p[i].first*2 > p[i].second || p[i].first > p[i].second && u1==u2){
            ans = 0 ;
        }
    }
    if(a[0]!=b[0] || x!=x1){
        cout<<"NO"<<endl;
    }
    else{
    ans ? cout<<"YES" : cout<<"NO";
    cout<<endl;
    }
}
return 0 ;

}



