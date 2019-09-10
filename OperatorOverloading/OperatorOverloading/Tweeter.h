#pragma once
#include <string>
#include "Person.h"

class Tweeter : public Person
{

	std::string twitterHandle;

public:
	Tweeter(
		std::string _first,
		std::string _last,
		int _arbitrary,
		std::string handle
	);

	~Tweeter();


};

