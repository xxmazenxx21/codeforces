#include <iostream>
using namespace std;
#include<iomanip>
#include <cmath>
#include <cctype>


int main() {


	int long long days;
	cin >> days;
	int years = days/365;
	int months;
	//cout << years;

	

	months = ( days  - (years * 365)  )  / 30 ;
	 
	if (years < 1) {
		months = days / 30; 
	}
	
	int day = days-((years * 365)+(months*30)) ;
	
	cout << years << " years\n" << months << " months\n" << day << " days";
 
}
