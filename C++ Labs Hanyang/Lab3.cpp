/*
C++ lab3
LiamSorta
This program will print user's current academic year given by the user.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

	int academicYear;
	string year1, year2, year3, year4, year5;
	string output;
	bool secondRun;

	secondRun = false;
	year1 = "Freshman";
	year2 = "Sophmore";
	year3 = "Junior";
	year4 = "Senior";
	year5 = "Graduate";

line1:	

	do {
		if (secondRun) {
			cout << "\n==================================\nERROR: Only numbers can be entered.\n==================================\n\n";
		}
		cin.clear();
		cin.sync();
		cout << "Please enter a year number: "; cin >> academicYear;
		secondRun = true;
	} while (!cin);

	if (academicYear == 1) {
		output = year1;
	}
	else if(academicYear == 2) {
		output = year2;
	}
	else if (academicYear == 3) {
		output = year3;
	}
	else if (academicYear == 4) {
		output = year4;
	}
	else if (academicYear == 5){
		output = year5;
	}
	else {
		secondRun = false;
		goto line1;
		cout << "\n========================================================\nERROR: Invalid Input, please only enter 1, 2, 3, 4 or 5.\n========================================================\n\n";
	//	exit(0);
	}
	cout << "Year " << academicYear << " is: A " <<  output << "\n\n";
	cin >> academicYear;
	return 0;



}

