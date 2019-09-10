#include <iostream>
#include "Person.h"

Person::Person(std::string _firstName, std::string _lastName, int _arbitrary) :
	firstName(_firstName),
	lastName(_lastName),
	arbitrary(_arbitrary)
{

	std::cout << "Constructing Person " << getName() << std::endl;

}

Person::~Person() {
	std::cout << "Destructing Person " << std::endl;
}

std::string Person::getName() {
	return firstName + " " + lastName;
}

int Person::getArbitrary() const{
	return arbitrary;
}

bool Person::operator<(int i) const{
	return arbitrary < i;
}

bool Person::operator<(Person const& p) const {
	return arbitrary < p.arbitrary;
}

bool operator<(int i, Person const& p) {
	return i < p.getArbitrary();
}