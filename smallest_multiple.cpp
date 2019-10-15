#include <iostream>

using namespace std;

//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

int main(){
	int i=20, j, count=0, result;
	while(i!=0){
		for(j=1; j<=20; j++){
			if(i%j==0)
			count++;
		}
		if(count==20){
			result=i;
			i=0;
		}
		else {
			i++;
			count=0;
		}	
	}
	cout<<result;
	return 0;
}
