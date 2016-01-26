//C++ Lab 7a

// Liam Sorta

// Liamsorta@gmail.com

#include <iostream>;

#include <cmath>;

#include <string>;

using namespace std;

int main()

{

	double a[] = { 1, 0, 0 };

	double b[] = { 0, 1, 1 };

	double c[] = { 1, 1, 1 };

	double d[] = { 0, 0, 1 };

	double ab = sqrt(

		(a[0] - b[0])*(a[0] - b[0]) +

		(a[1] - b[1])*(a[1] - b[1]) +

		(a[2] - b[2])*(a[2] - b[2]));

	double ac = sqrt(

		(a[0] - c[0])*(a[0] - c[0]) +

		(a[1] - c[1])*(a[1] - c[1]) +

		(a[2] - c[2])*(a[2] - c[2]));

	double ad = sqrt(

		(a[0] - d[0])*(a[0] - d[0]) +

		(a[1] - d[1])*(a[1] - d[1]) +

		(a[2] - d[2])*(a[2] - d[2]));

	double x = A(a, b);

	cout << " what is this " << x << "\n";

	cout << " ab=" << ab << " ac=" << ac << " ad=" << ad;

	cout << "Result ";

	system("pause");

	return 0;

}