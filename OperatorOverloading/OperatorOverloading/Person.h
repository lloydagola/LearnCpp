#pragma once
#include <string>
class Person
{
	std::string firstName;
	std::string lastName;
	int arbitrary;

public:
	Person() = default;
	Person(std::string _firstName, std::string _lastName, int arbitrary);

	~Person();

	std::string getName();
	int getArbitrary() const;
	bool operator<(Person const& p) const;
	bool operator<(int i) const;
};

bool operator<(int i, Person const& p);

