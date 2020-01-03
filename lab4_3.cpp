#include <iostream>
#include <cmath>

using namespace std;

int findDivisor(int num){
	int i = 2;
	while (i < num){
		if (num % i == 0){
			return i;
		} else {
			i++;
		}
	}
}


int main(){
	cout << findDivisor(10) << endl;
	cout << findDivisor(97) << endl;
	cout << findDivisor(221) << endl;
	return 0;
}
