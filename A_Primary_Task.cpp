#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
int num[t];
    for(int i = 0;i <t ; i++) {
       string a;
        cin >> a;
        int f ;
//int b= stoi(a);
        if(a[0]!= '1' && a[1] != '0' || a.size() <=2 ){
            cout<<"NO"<<endl;
            
        }

       else   { 
        int b = stoi(a.substr(2));
        f=b>3? b%1000:b%10;
       /* if(a.size() ==3){
       f = b%10;}
       else { f= b%1000;

       }*/
       num[i]=f;}}

       for(int i = 0 ; i <t ; i++){
        if (num[i] >=2){
            cout << "YES" << endl;}
         else {
            cout << "NO" << endl;}
       }
   
    return 0;
}
