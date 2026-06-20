#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main() {int n;
cin>>n;
int count= 0 ;
int num=2;
    while (1){
		int ans = 1 ;
		for (int j = 2;  j <= sqrt(num); j++)
		{
			if(num%j==0){
				ans = 0 ;
				break;
			}

		}if(ans==1)	{
            count++;
        }
        if(count == n){
            cout<<num<<endl;
            break;
        }
		num++;
	}
    return 0;
}

