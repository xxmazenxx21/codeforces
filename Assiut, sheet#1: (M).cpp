#include <iostream>
using namespace std;
#include<iomanip>
#include <cmath>
#include <cctype>


int main() {
	
	char x; 
	cin >> x; 
	if (isdigit(x)) {

		cout << "IS DIGIT"; 
	}
	else if (isupper(x)) {
		cout << "ALPHA"<<"\n";
		cout << "IS CAPITAL";
	}
	else {
		cout << "ALPHA"<<"\n";
		cout << "IS SMALL";
	}
	

	
}
