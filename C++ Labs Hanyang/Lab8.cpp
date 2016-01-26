// Lab 8a 
// LiamSorta
// liamsorta@gmail.com
#include<iostream>

using namespace std; 

int main( ) {
	int arraySize;
	int arrayL;
	int arrayW;

	cout << "Please Enter your Size of An Array \n"; 
	cin >> arraySize;
	int** matrix;

	matrix = new int*[arraySize];
	for (int i = 0; i < arraySize; i++)
		matrix[i] = new int[arraySize];

	for (int a = 0; a < arraySize; a++)
	{
		for (int i = 0; i < arraySize; i++) {
				matrix[a][i] = a+i;
		}
	}

	for (int i = 0; i < arraySize; i++)
	{
		for (int j = 0; j < arraySize; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << "\n";
	}


	//[1. Add Code Here ]
    //Fill out the table using a netsted loop so that 
	//Table[r][c] = r + c; 
	//[2. Add Code Here]
	//Itrate over the table, printing each value
	//so that columns align(hint: use a nested loop )
	//[3. Add Code Here]   
	system("pause"); 
	for (int i = 0; i < arraySize; i++)
		delete matrix[i];
	delete matrix;
	return 0; 

}