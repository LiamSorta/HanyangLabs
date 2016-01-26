	//Liam Sorta
	//9????????
	//C++ Lab2


	
#include <iostream>
using namespace std;

int main() {
	
	int iX = 0;
	float fY = 0;
	string title;

	int iA = 0, iB = 0;
	float fA = 0.0f, fB = 0.0f;

	cout << "Enter two integer numbers: \n";
	cin >> iA;
	cin >> iB;

	cout << "Enter two float values: \n";
	cin >> fA;
	cin >> fB;

	//iX calc
	
	iX = iA + iB;
	cout << "\niA + iB = " << iX << "\n";

	iX = iA - iB;
	cout << "iA - iB = " << iX << "\n";

	iX = iA * iB;
	cout << "iA * iB = " << iX << "\n";

	iX = iA / iB;
	cout << "iA / iB = " << iX << "\n";

	iX = iA % iB;
	cout << "iA % iB = " << iX << "\n\n";

	//iY calc
	
	fY = fA + fB;
	cout << "fA + fB = " << fY << "\n";

	fY = fA - fB;
	cout << "fA - fB = " << fY << "\n";

	fY = fA * fB;
	cout << "fA * fB = " << fY << "\n";

	fY = fA / fB;
	cout << "fA / fB = " << fY << "\n";

	fmod(fA, fB);
	cout << "fA % fB = " << fY << "\n";

	cin >> fY;

}

