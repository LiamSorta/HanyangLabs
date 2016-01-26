//Liam Sorta
//liamsorta@gmail.com

#include <iostream>

using namespace std;

double iterativeSavings(double initialDeposit, double interestRate, int numberYears) {

	double total = initialDeposit;

	for (int i = 0; i < numberYears; i++) {
		total = total*(1 + interestRate);
	}
	return total;
}


double recursiveSavings(double initialDeposit, double interestRate, int numofYears) {
	if (numofYears == 0)
		return initialDeposit;

	else {
		return recursiveSavings(initialDeposit*(1 + interestRate), interestRate, numofYears - 1);
	}
}

int main() {
	int numofYears;
	double initalDeposit;
	double interestRate;

	double recInt;
	double itInt;

	cout << "Enter initial savings: ";
	cin >> initalDeposit;
	cout << "Enter yearly interest rate: ";
	cin >> interestRate;
	cout << "Enter number of compound interest years: ";
	cin >> numofYears;

	itInt = iterativeSavings(initalDeposit, interestRate, numofYears);
	recInt = recursiveSavings(initalDeposit, interestRate, numofYears);

	cout << "\nRecursive: $" << initalDeposit << " after " << numofYears << " years, at " << interestRate << " would amount to $" << recInt << endl;
	cout << "Iterative: $" << initalDeposit << " after " << numofYears << " years, at " << interestRate << " would amount to $" << itInt << endl;
	system("pause");
	return 0;
}

