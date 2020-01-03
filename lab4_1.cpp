#include <iostream>
#include <cmath>

using namespace std;

double func(double x){
	return 3 * pow(x, 3) + 2 * exp(1) + pow(2, (2 * x + 1)) + sqrt(pow(x, 2) + 1);
}

int main(){
	double x;
	cout << "Enter x = ";
	cin >> x;
	cout << "Result y = " << func(x);


	return 0;
}
