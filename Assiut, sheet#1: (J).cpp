#include <iostream>
using namespace std;
#include<iomanip>
#include <cmath>


int main() {
	
	int long long A, B;
	cin >> A >> B; 
	if (A % B == 0 or B % A == 0) {

		cout << "Multiples";
	}
	else
		cout << "No Multiples"; 

}
