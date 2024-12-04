#include <iostream>
using namespace std;
#include<iomanip>
#include <cmath>
#include <cctype>


int main() {
	
	char x; 
	cin >> x; 
	if (isupper(x)) {
		 x = tolower(x); 
		cout << x;
		

	}

	else if(islower(x)) {

		x = toupper(x); 
		cout << x; 
	}

	
}
