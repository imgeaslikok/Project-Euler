#include <iostream>

using namespace std;

//The sum of the squares of the first ten natural numbers is,
//12 + 22 + ... + 102 = 385
//The square of the sum of the first ten natural numbers is,
//(1 + 2 + ... + 10)2 = 552 = 3025
//Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

int sumOfSquares();
int squareOfSum();

int main(){
	int s1, s2, result;
	s1=sumOfSquares();
	s2=squareOfSum();
	result=s2-s1;
	cout<<result;
	return 0;
}

int sumOfSquares(){
	int i, sum=0;
	for (i=1; i<=100; i++){
		sum+=i*i;
	}
	return sum;
}

int squareOfSum(){
	int i, sum=0;
	for(i=0; i<=100; i++){
		sum+=i;
	}
	return sum*sum;
}
