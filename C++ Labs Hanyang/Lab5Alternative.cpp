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
	int groupCount = 0;
	while (!OpenFile.eof()) {
		
		double check;
		check = readData(SENT, OpenFile);
		
		if (check != -1) { 
			groupSum += check; 
		}
		else {
			groupCount++;
			cout << "                Group " << groupCount << "\n";
			cout << "_______________________________________________\n";
			cout << setprecision(2) << "|      Previous Group \t\t|\t" << groupSum << "\n";
			overallSum += groupSum;
			cout << setprecision(2) << "|  Current Total of Groups\t| \t" << overallSum << "\n";
			groupSum = 0;
			cout << "_______________________________________________\n\n";
		}
	}
	cout << "\n===============================================\n\n";
	cout << "          Total of all Groups\n";
	cout << "_______________________________________________";
	cout << setprecision(2) << "\n\n|     Total of all Groups\t| \t" << overallSum << "\n";
	cout << "_______________________________________________\n\n";

	int lol;
	cin >> lol;
}

