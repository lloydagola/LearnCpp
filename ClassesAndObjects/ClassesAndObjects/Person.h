#pragma once
#include <string>
class Person
{
	std::string firstName;
	std::string lastName;

public:
	Person() = default;
	Person(std::string _firstName, std::string _lastName);

	~Person();

	std::string getName();
};

