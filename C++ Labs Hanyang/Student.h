#pragma once
#include <iostream>
#include <string>
#include <sstream>

class Student
{

private:
	std::string name;
	int idNum;
	double GPA;

public:
	Student(std::string, int, double);
	std::string getName();
	double getGPA();
	int getidNum();
	void setStudentName(std::string);
	void setGPA(double newGPA);
	std::string formatString();
};

