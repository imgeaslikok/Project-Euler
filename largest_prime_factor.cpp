#include <iostream>

using namespace std;
//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?

int main(){
	long long int num = 600851475143;
	int i, max=1;
	for(i=2; num!=1; i++){
		if(num%i==0){
			num/=i;
			if(i>max)
			max=i;
		i--;
		}
	}
	cout<<max;
	return 0;
}
