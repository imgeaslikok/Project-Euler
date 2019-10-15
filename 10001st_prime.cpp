#include <iostream>
#include <cmath>

using namespace std;

//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//What is the 10 001st prime number?

int checkPrime(int num);

int main(){
	int i=3, prime=1, ch;
	while(prime!=10001){
		ch=checkPrime(i);
		if(ch==1){
			if(prime==10000)
			cout<<i;			
			prime++;
		}
		i+=2;		
	}	
	return 0;
}

int checkPrime(int num){
	int i;
	for(i=2; i<=sqrt(num); i++){
		if(num%i==0)
		return 0;
	}
	return 1;
}
