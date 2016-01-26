//Lab7c
//Liam Sorta
//liamsorta@gmail.com


#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

int main()
{
	string sLine;
	double temp;
	double total = 0;
	int count = 0;

	try	{
		ifstream Openfile("TextFile1.txt", ios::in);

		if (Openfile.good())
		{
			while (getline(Openfile, sLine))
			{
				stringstream str(sLine);	
				while (str >> temp) 
				{
					total += temp;
					cout << "Read Line " << count << " " << temp << "\tSum " << total << endl;
				}
				total = 0;
				count++;

				cout << endl;
			} 
			Openfile.close();
		}
		else {
			throw 10;
		}
	}

	catch (int e)
	{
		cout << "File Not found " << e << endl;
	}
	system("pause"); 
	return 0;

}