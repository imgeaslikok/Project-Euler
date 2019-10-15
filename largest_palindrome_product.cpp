#include <iostream>

using namespace std;
//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//Find the largest palindrome made from the product of two 3-digit numbers.

int checkPalindrome(int num);

int main(){
	int i,j,num,check, result=0;
	for(i=999; i>=100; i--){
		for(j=999; j>=100; j--){
			num=i*j;
			check=checkPalindrome(num);
			if(check==1){
				if(num>result)
				result=num;
			}
		}
	}
	cout<<result;
	return 0;
}

int checkPalindrome(int num){
	int temp, reverse=0;
	temp=num;
	while (temp!=0){
		reverse = reverse * 10;
		reverse = reverse + temp%10;
		temp = temp/10;
	}
	if(num==reverse)
	return 1;
	else 
	return 0;
}
