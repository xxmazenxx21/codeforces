#include <iostream>
using namespace std;
#include<iomanip>
#include <cmath>
#include <cctype>


int main() {
	
	int long long x, y;
	char operatoor; 

	cin >> x; 
	cin >> operatoor;
	cin >> y;  

	if (operatoor == '+') {
		cout << x + y; 
	}
	else if (operatoor == '-') {

		cout << x - y;

	}
	else if (operatoor == '*') {

		cout << x * y;

	}
	else if (operatoor == '/') {

		cout << x / y;

	}
	
}
