#include <iostream>
#include "Person.h"

Person::Person(std::string _firstName, std::string _lastName) :
	firstName(_firstName),
	lastName(_lastName)
{

	std::cout << "Constructing " << getName() << std::endl;

}

Person::~Person() {
	std::cout << "Destructing..." << std::endl;
}

std::string Person::getName() {
	return firstName + " " + lastName;
}