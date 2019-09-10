#include "Tweeter.h"

#include <iostream>

Tweeter::Tweeter(
	std::string _first,
	std::string _last,
	int _arbitrary,
	std::string _twitterHandle
) : Person(_first, _last, _arbitrary),
twitterHandle(_twitterHandle) {

	std::cout << "constructing tweeter..." << twitterHandle << std::endl;

}

Tweeter::~Tweeter() {
	std::cout << "destructing tweeter " << twitterHandle << std::endl;
}
