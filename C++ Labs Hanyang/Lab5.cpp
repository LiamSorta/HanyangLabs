//Lab5
//C++ Programming
//Liam Sorta
//Liamsorta@gmail.com

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

double readData(double sent, ifstream& OpenFile) {

	double tempNum = 0.0;
	double total = 0.0;

	OpenFile >> tempNum;
	if (tempNum != sent) {
		return tempNum;
	}
	else {
		return -1;
	}
	
}

int main() {
	


	const double SENT = -999.99;
	ifstream OpenFile("Lab5Data.txt");

	double overallSum = 0.0;
	double groupSum = 0.0;

	while (!OpenFile.eof()) {
		double check;
		check = readData(SENT, OpenFile);
		
		if (check != -1) { 
			groupSum += check; 
		}
		else {
			cout << setprecision(2) << "The previous group had a sum of " << groupSum << "\n";
			overallSum += groupSum;
			cout << setprecision(2) << "The current overall total had a sum of " << overallSum << "\n";
			groupSum = 0;
		}


	}
	int lol;
	cin >> lol;
}

