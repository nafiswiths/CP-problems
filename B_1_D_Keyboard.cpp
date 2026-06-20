#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main() {
 string abc ; 
 cin>>abc;
 int d = 0 ;
 int first = abc.find('A');
for(char i = 'B';i<='Z';i++){
    int second = abc.find(i);
    d+= abs(first-second);
    first  = second;

}
cout<<d;
    return 0;
}
