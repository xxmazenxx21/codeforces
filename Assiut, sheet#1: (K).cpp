#include <iostream>
using namespace std;
#include<iomanip>
#include <cmath>


int main() {
	
	
	int long long a, b, c; 
	cin >> a >> b >> c;
	int long long minmm = a;
	int long long maxmm = a; 

	if (b < minmm) {
		minmm = b;

	}
	if (b > maxmm) {

		maxmm = b;

	}

	if (c < minmm) {
		minmm = c ;

	}
	if (c > maxmm) {

		maxmm =c ;

	}

	cout << minmm  <<" " << maxmm;
}
