#include<bits/stdc++.h>
using namespace std ; 
const int N =10e6;
int p[N];
int spf[N];
vector<vector<int>> dividendd(N);
vector<vector<int>> divisors(N);

void dividend_divisor(int n ){
    for(int i = 1 ; i<= n ; i++){
        for(int j = i;j<=n ; j+=i){
            dividendd[i].push_back(j);
            divisors[j].push_back(i);
        }
    }
}
void fn(int n ){
    for(int i= 2 ; i<= n ; i++){
        if(spf[i]==0){
        for(int j=i ;j<=n;j+=i){
            if(spf[j]==0)spf[j]=i;
        }}
    }
}
void prime_fact_spf(int n){while(n>1){
     int p = spf[n],cnt = 0 ;
    while(n%p==0){
       
        n=n/p;
        cnt++;
    }
     cout<<p<<"^"<<cnt<<"x";
}
}
void sieve_of_eresthon(int  n){//better time complexity <O(nlogn)
    for(int i = 2 ; i<=n;i++ ){
        if(p[i]==0){
            cout<<i<<" ";
            for(int j = i+i ; j<= n ;j=j+i){
              

                    p[j]=1 ;
            
            }
        }
    }
}
//spf(smallest prime factorization) ..kono prime num er spf oi prime number tay hobe
void prime_fact(int  n ){//)(root n )
    for(int i =2 ; i*i<=n ;i++){
        if(n%i== 0){
            int cnt = 0  ;  
            while(n%i==0){
                cnt++;
                n=n/i;
            }
        
        cout<<i<<"^"<<cnt<<"x";
        }
    }
    if(n>1 )cout<<n<<"^"<<1<<endl;

}
int main(){
    int a = 12;
    prime_fact(12);
    sieve_of_eresthon(100);
}