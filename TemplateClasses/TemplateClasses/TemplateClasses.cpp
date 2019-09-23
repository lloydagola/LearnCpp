// TemplateClasses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

template <class T>
class Accumulator {
	T total;

public:
	Accumulator(T _total) : total(_total) {};
	T operator+=(T const& item) {
		return total = total + item;
	}

	T getTotal() const {
		return total;
	}
};

int main()
{
	Accumulator<int> integers(0);
	Accumulator<std::string> strings("");

	std::cout << "original: " << integers.getTotal() << std::endl;
	integers += 17;
	std::cout << "+17: " << integers.getTotal() << std::endl;
	integers += 25;
	std::cout << "+25: " << integers.getTotal() << std::endl;

	std::cout << "original: " << strings.getTotal() << std::endl;
	strings += "hello";
	std::cout << "+hello: " << strings.getTotal() << std::endl;
	strings += " ";
	strings += "world";
	std::cout << "+world: " << strings.getTotal() << std::endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
