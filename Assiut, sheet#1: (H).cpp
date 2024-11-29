#include <iostream>
using namespace std;
#include<iomanip>
#include <cmath>


int main() {
	//round return to nearst number 
	// floor the nearst less number exampe 68.95  fllor = 68
	//ceil greatest nearst number example ceil(15.01) = 16
	 
	double A, B; 
	cin >> A >> B; 
	double result = A / B; 

	cout << "floor " << A << " / " << B << " = " << floor(result) <<"\n";
	cout << "ceil " << A << " / " << B << " = " << ceil(result) << "\n";
	cout << "round " << A << " / " << B << " = " << round(result);


}
