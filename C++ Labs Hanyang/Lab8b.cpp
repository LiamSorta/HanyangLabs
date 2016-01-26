//HIGHEST: 640
//Unhandled exception at 0x753C812F in workpls.exe: Microsoft C++ exception: std::bad_alloc at memory location 0x0030FAB0.
// Lab 8b
// <Your name here>
// <Your e-mail>

#include <iostream>

using namespace std;

int main() {
	int tableSize;
	cout << "Please Enter your Size of An Array \n";
	cin >> tableSize;

	// Create a 3-dimensional array of double where
	// the size of each dimension is TABLE_SIZE: double table[][][] =  

	double ***array3;
	array3 = new double**[tableSize];

	for (int i = 0; i < tableSize; i++) {

		array3[i] = new double*[tableSize];

		for (int j = 0;j <tableSize;j++)
		{
			array3[i][j] = new double[tableSize];
		}
	}

	for (int x = 0; x < tableSize; x++)
	{
		for (int y = 0; y < tableSize; y++)
		{
			for (int z = 0; z < tableSize; z++) {
				array3[x][y][z] = 1.5;
			}
		}
	}

	//for (int x = 0; x < tableSize; x++)
	//{
	//	for (int y = 0; y < tableSize; y++)
	//	{
	//		for (int z = 0; z < tableSize; z++) {
	//			cout << array3[x][y][z] << " ";
	//		}
	//	}
	//}

	system("pause");
	return 0;
}//End of main