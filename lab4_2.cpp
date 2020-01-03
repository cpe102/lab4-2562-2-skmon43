#include<iostream>
#include<cmath>

using namespace std;

//Write function findDistance() here
double findDistance(double u, double a, double t){
	double s = u * t + 0.5 * a * pow(t, 2);
	return s;
}

int main(){
	cout << findDistance(0, 0.5, 1) << endl;
	cout << findDistance(1.5, -1, 2) << endl;
	cout << findDistance(5, 4, 3) << endl;
  //Calling findDistance() using test cases

  return 0;
}
