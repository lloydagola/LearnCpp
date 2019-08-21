#include <iostream>
#include "Person.h"

Person::Person(std::string _firstName, std::string _lastName) :
	firstName(_firstName),
	lastName(_lastName)
{

	std::cout << "Constructing Person " << getName() << std::endl;

}

Person::~Person() {
	std::cout << "Destructing Person " << std::endl;
}

std::string Person::getName() {
	return firstName + " " + lastName;
}