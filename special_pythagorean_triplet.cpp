#include <iostream>

using namespace std;

/*A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.*/

int main(){
	int a , b, c, result;
	int limit = 1000;
	for (a = 1; a < limit / 3; a++) {
		for (b = a; b < limit / 2; b++){
			c = limit - a - b;
			if (a*a + b*b == c*c){
				result = a*b*c;
			}
		}
	} 
	cout<<result;
	return 0;
}
