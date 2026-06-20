#include <bits/stdc++.h>
#include <string>
#include<math.h>
using namespace std;

int main() {
    for (int num = 2 ; num<=100;num++ ){
		int ans = 1 ;
		for (int j = 2;  j< sqrt(num); j++)
		{
			if(num%j==0){
				ans = 0 ;
				break;
			}

		}if(ans==1)	cout<<num<<endl;
		
	}
    return 0;
}
