//Assignment 2
//Liam Sorta
//liamsorta@gmail.com

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

	//2. Declare required variables 
	string name;
	int grade;
	int numOfStudents;

	//3. Declare two vectors to holding 
	// student names and their grades.

	vector<string> studentNames;
	vector<int> studentGrades;

	//4. Declare other required variables 
	int max = 0;
	int min = 0;
	double avg = 0;



	//5. Read number of students from keyboard 
	cout << "How many students: ";
	cin >> numOfStudents;


	//studentGrades.resize(numOfStudents);
	//studentNames.resize(numOfStudents);

	//6. Store names on vector 
	for (int i = 0; i < numOfStudents; i++)
	{

		cout << "Enter a name for student " << i << ": ";
		cin >> name;
		studentNames.push_back(name);
	}

	//7. Store grades on vector
	for (int i = 0; i < numOfStudents; i++)
	{
		cout << "Enter a grade for " << studentNames[i] << ": ";
		cin >> grade;

		studentGrades.push_back(grade);
		//	studentGrades.push_back(1);
	}

	//8. Calculate  class  total 
	for (int i = 0; i < numOfStudents; i++)
	{
		avg += studentGrades[i];
		if (i + 1 == numOfStudents) {
			avg /= numOfStudents;
		}
	}

	int highest = studentGrades[0];
	int lowest = studentGrades[0];

	for (int i = 0; i < numOfStudents; i++)
	{
		if (studentGrades[i] > highest) {
			highest = studentGrades[i];
		}

	}

	for (int i = 0; i < numOfStudents; i++)
	{
		if (studentGrades[i] < lowest) {
			lowest = studentGrades[i];
		}

	}

	for (int i = 0; i < numOfStudents; i++) {
		for (int b = 0; b < numOfStudents - 1; b++) {
			if (studentGrades[i] < studentGrades[b]) {

				int tempGrade = studentGrades[i];
				studentGrades[i] = studentGrades[b];
				studentGrades[b] = tempGrade;

				string tempName = studentNames[i];
				studentNames[i] = studentNames[b];
				studentNames[b] = tempName;

			}
		}
	}



	cout << "*************************************************" << endl;
	cout << "Name        Class Grade( lowest to highest) " << endl;

	for (int i = 0; i < numOfStudents; i++)
	{
		cout << studentNames[i] << "\t\t" << studentGrades[i] << endl;
	}

	cout << " * Highest grade :" << highest << endl;
	cout << " * Lowest grade  :" << lowest << endl;
	cout << " * Average grade :" << avg << endl;

	system("pause");
	return 0;
}
