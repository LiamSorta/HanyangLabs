#include "Student.h"

Student::Student(std::string iName, int iId, double iGPA)
{
	name = iName;
	idNum = iId;
	GPA = iGPA;
}

std::string Student::getName() {
	return name;
}
double Student::getGPA() {
	return GPA;
}

int Student::getidNum() {
	return idNum;
}

void Student::setStudentName(std::string newName) {
	name = newName;
}

void Student::setGPA(double newGPA) {
	GPA = newGPA;
}

std::string Student::formatString() {
	std::stringstream ssID, ssGPA;
	std::string sID, sGPA;
	ssID << idNum;
	ssGPA << GPA;
	ssID >> sID;
	ssGPA >> sGPA;

	std::string formatted = "Student Name: " + name + "\n" + "ID Number: " + sID + "\n" + "GPA: " + sGPA + "\n";
	return formatted;
}