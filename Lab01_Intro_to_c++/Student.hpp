#pragma once

#include <iostream>

class student
{
public:
	std::string firstName;
	std::string lastName;
	int IDNumber;
	std::string course;
	int level;
	int marks[12];

	student();
	student(const std::string firstNameInput, const std::string lastNameInput, const int IDNumberInput, const std::string courseInput, const int levelInput);

	void outputDetails();
	void addLevelMarks(int unitMarks[4], int level);
	static double levelAverage(int level, const int unitMarks[4]);
	void classification();
};