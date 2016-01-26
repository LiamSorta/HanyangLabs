//C++ Lab 7
//Liam Sorta
//liamsorta@gmail.com

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double square(double val1[], double val2[]);

int main()
{

	double a[] = { 1, 0, 0 };

	double b[] = { 0, 1, 1 };

	double c[] = { 1, 1, 1 };

	double d[] = { 0, 0, 1 };

	double ab = square(a, b);

	double ac = square(a, c);

	double ad = square(a, d);

	double x = square(a,b);

	cout << "what is this " << x << "\n";

	cout << "ab= " << ab << " ac= " << ac << " ad= " << ad;

	cout << "\nResult\n\n\n\n ";

	system("pause");

	return 0;

}

double square(double val1[], double val2[]) {
	double ans = sqrt((val1[0] - val2[0])*(val1[0] - val2[0]) +
	     (val1[1] - val2[1])*(val1[1] - val2[1]) +
		 (val1[2] - val2[2])*(val1[2] - val2[2]));
	return ans;
}