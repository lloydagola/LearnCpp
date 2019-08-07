#pragma once
#include <string>
class Person
{
	std::string firstName;
	std::string lastName;

public:
	Person();
	Person(std::string _firstName, std::string _lastName);
	std::string getName();
};

