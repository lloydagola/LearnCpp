#include "Person.h"

Person::Person(std::string _firstName, std::string _lastName) :
	firstName(_firstName),
	lastName(_lastName)
{

}

std::string Person::getName() {
	return firstName + " " + lastName;
}