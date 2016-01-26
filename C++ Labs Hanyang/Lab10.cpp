#include <iostream>
#include <sstream>
#include "Student.h"

using namespace std;

int main() {
	const string NAME = "Liam Sorta";
	const int STUID = 000000000;
    const double GPA1 = 4.00; 
	const double GPA2 = 2.34;   

	Student stu1(NAME, STUID, GPA1);
	cout << "\nName: " << stu1.getName();
	cout << "\nId Number: " << stu1.getidNum();
	cout << "\nGPA: " << stu1.getGPA() <<endl;
	stu1.setGPA(GPA2);
	cout << stu1.formatString();


	// Create a second student object
								   
	// With a name of Pistol Pete, a gpa of 4.00,
								  
	// and a student Id of 000000001
								   
	Student stu2("Pistol Pete", 000000001, 4.0);
	cout << "\nName: " << stu2.getName();
	cout << "\nId Number: " << stu2.getidNum();
	cout << "\nGPA: " << stu2.getGPA() << endl;
	cout << stu2.formatString();


	system("pause"); 
	return 0; 
}