//Lab6
//C++ Programming
//Liam Sorta
//Liamsorta@gmail.com

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int readData(ifstream *OpenFile, double x[], double sent);
double sumNumbers(double arr[], int num);

int main() {

	const int SIZE_ARR = 30;
	const double SENT = -999.99;
	ifstream OpenFile("Lab6Data.txt", ios::in);

	double overallSum = 0;
	double overallNum = 0;
	double sum = 0;
	int num = 0;
	double egArray[SIZE_ARR] = { 0 };

	while (!OpenFile.eof()) {
		num = readData(&OpenFile, egArray, SENT);
		sum = sumNumbers(egArray, num);
		cout << setprecision(2) << fixed << "The average of the group is: " << sum / num << endl;
		overallSum += sum;
		overallNum += num;

	}
	cout << "The average of the overall inputs is: " << overallSum / overallNum;
	cin >> num;
	return 0;
}

int readData(ifstream *OpenFile, double x[], double sent) {

	int index = 0;
	double aNumber = 0;
	
	*OpenFile >> aNumber;
	//cout << "FT " << aNumber;
	
	while (aNumber != sent) {
		x[index] = aNumber;
		
		index++;
		*OpenFile >> aNumber;
	}

	return index;

}

double sumNumbers(double arr[], int num) {
	double x = 0;
	for (int i = 0; i < num; i++) {
		x += arr[i];
	}
	return x;
}