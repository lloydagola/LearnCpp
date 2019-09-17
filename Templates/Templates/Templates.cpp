 // Templates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//a generic template function to return the maximum of 2 types
template<class T>
T max(T const& t1, T const& t2) {
	return t1 < t2 ? t2 : t1;
}

int main()
{
	std::cout << "Integers" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "Max of 3 and 4 is " << max(3, 4) << std::endl;
	std::cout << std::endl;
	std::cout << "Doubles" << std::endl;
	std::cout << "----------------------------" << std::endl;
    std::cout << "Max of 3.0 and 4.0 is " << max(3.0,4.0) << std::endl;
	std::cout << std::endl;
	std::cout << "Doubles explicitly returning a double" << std::endl;
	std::cout << "----------------------------" << std::endl;
    std::cout << "Max of 33 and 2.0 is " << max<double>(33, 2.0) << std::endl;
	std::cout << std::endl;

	const std::string hello = "HELLO";
	const std::string dogs = "DOGS";
	std::cout << "Strings: N/B- only works with variables" << std::endl;
	std::cout << "----------------------------" << std::endl;
    std::cout << "Max of HELLO and DOGS is " << max(hello, dogs) << std::endl;
	std::cout << std::endl;
	std::cout << "Booleans" << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "Max of true and false is " << max(true, false);
	std::cout << std::endl;

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
