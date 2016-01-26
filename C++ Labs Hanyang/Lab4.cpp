//Lab4.cpp
//Liam Sorta
//Liamsorta@gmail.com

#include <iostream>       
#include <fstream>        
#include <iomanip>        
#include <typeinfo>        
#include <string>   

using namespace std;

int main() {

	double intpart;
	double aNumber; 
	string aType;

	ifstream OpenFile("Lab4Data.txt");
	cout << "|Celsius\t|\tFahrenheit\t|\tData Error?\n";
	cout << "____________________________________________________________\n\n";

	while (!OpenFile.eof()) {
		
		OpenFile >> aNumber;
		cout << aNumber;

		aType = typeid(aNumber).name();


		if (!modf(aNumber, &intpart) == 0.0) {
			cout << "\t\t" << aNumber * (9.0 / 5.0) + 32.0;
		}
		else {
			cout << "\t\t" << 0 << "\t\t\t" << "Data Error";
		}
		cout << "\n";

		//if(aType.compare("double")== 0){
		//	cout << typeid(aNumber).name();
		////	cout << "\t\t" << aNumber * (9.0 / 5.0) + 32.0;
		//}
		//else {
		//	cout << typeid(aNumber).name();
		//	cout << "\t\t" << 0 << "\t\t" << "Data Error";
		//}
		//cout << "\n";

	}
	OpenFile.close();
	cin >> aNumber;
	return 0;


}