#include <iostream>
#include <cmath>

using namespace std;

//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//Find the sum of all the primes below two million.

int main(){
	int i, j, flag;
	long long int sum = 2;
	for(i=3; i<2000000; i+=2){
		flag=0;
		for (j=2; j<=sqrt(i); j++){
			if(i%j==0)
			flag=1;
		}
		if(flag==0)
		sum+=i;
	}
	cout<<sum;
	return 0;
}
