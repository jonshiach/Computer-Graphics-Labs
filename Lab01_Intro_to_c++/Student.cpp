#include "Student.hpp"

student::student(){};

student::student(const std::string firstNameInput, const std::string lastNameInput, const int IDNumberInput, const std::string courseInput, const int levelInput)
{
	firstName = firstNameInput;
	lastName = lastNameInput;
	IDNumber = IDNumberInput;
	course = courseInput;
	level = levelInput;
	std::cout << "\nStudent object created" << std::endl;
}

void student::outputDetails()
{
	std::cout << "\nStudent Details\n---------------"
		<< "\nName: " << firstName << " " << lastName
		<< "\nID Number: " << IDNumber
		<< "\nCourse: " << course
		<< "\nLevel: " << level << std::endl;

	for (int level = 4; level < 6; level++)
	{
		int indexLevel = (level - 4) * 4;
		std::cout << "level " << level << " marks: ";
		for (int i = 0; i < 4; i++)
		{
			std::cout << marks[indexLevel + i] << " ";
		}
		std::cout << std::endl;
	}
}

void student::addLevelMarks(int unitMarks[4], int level)
{
	std::cout << "\nAdding marks for " << firstName << " " << lastName << std::endl;

	int indexLevel = (level - 4) * 4;

	for (int i = 0; i < 4; i++)
	{
		marks[indexLevel + i] = unitMarks[i];
	}
}

double student::levelAverage(int level, const int unitMarks[4])
{
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		sum += unitMarks[i];
	}
	return sum / 4.0;
}

void student::classification()
{
	if (level < 6)
	{
		std::cout << firstName << " " << lastName << " is not a level 6 student.\n";
		return;
	}

	float weightedAvg = 0.25f * levelAverage(5, marks) + 0.75f * levelAverage(6, marks);
	std::string text;
	if (weightedAvg >= 70)
		text = "First class";
	else if (weightedAvg >= 60)
		text = "Upper second-class";
	else if (weightedAvg >= 50)
		text = "Lower second-class";
	else if (weightedAvg >= 40)
		text = "Third class";
	else
		text = "Fail";

	std::cout << "Classification: " << text << " (weighted average = " << weightedAvg << ")\n";
}

