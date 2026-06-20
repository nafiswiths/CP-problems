#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
class hero{
    public:
    int health ; 
    string name ; 
   hero(string a , int b){
    name=a ;
    health = b ; 
   }
   void display(){
    cout<<"Name : "<<name<<endl<<"Health : "<< health <<endl; 

   }
    
};

int villain_damage ;
cin>>villain_damage;
hero batman("bruce",100-villain_damage);
batman.display();




    return 0;
}
