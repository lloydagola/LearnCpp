// Struct.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct COORDINATE {
	double x_axis;
	double y_axis;
	double z_axis;
};

struct PLAYER {
	int score = 0;
	std::string player_name;
	std::string level = "juvie";
	int death_count = 0;
	int kill_count = 0;
	bool isPremium = false;
};

int main()
{
	COORDINATE startingPoint;
	COORDINATE endingPoint;

	startingPoint.x_axis = 0;
	startingPoint.y_axis = 0;
	startingPoint.z_axis = 0;

	endingPoint.x_axis = 65;
	endingPoint.y_axis = 72;	
	endingPoint.z_axis = 103;

	std::cout << "Navigating from point(" << startingPoint.x_axis << ", " << startingPoint.y_axis << ", " << startingPoint.z_axis << ") to point(" 
		<< endingPoint.x_axis << ", " << endingPoint.y_axis << ", " << endingPoint.z_axis<<")." << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;

  
	PLAYER ready_player_one;
	PLAYER tron;

	ready_player_one.player_name = "Jackson Blackson";
	ready_player_one.level = "infamous";
	ready_player_one.kill_count = 1;

	tron.player_name = "Legacy";
	tron.death_count++;
	tron.isPremium = true;

	std::cout << ready_player_one.player_name << std::endl
		<< "---------------------" << std::endl
		<< "Score: " << ready_player_one.score << std::endl
		<< "Kill count: " << ready_player_one.kill_count << std::endl
		<< "Death count: " << ready_player_one.death_count << std::endl
		<< "Level: " << ready_player_one.level << std::endl
		<< "Premium: " << ready_player_one.isPremium << std::endl
		<< "---------------------" << std::endl;


	std::cout << std::endl;
	std::cout << std::endl;


	std::cout << tron.player_name << std::endl
		<< "---------------------" << std::endl
		<< "Score: " << tron.score << std::endl
		<< "Kill count: " << tron.kill_count << std::endl
		<< "Death count: " << tron.death_count << std::endl
		<< "Level: " << tron.level << std::endl
		<< "Premium: " << tron.isPremium << std::endl
		<< "---------------------" << std::endl;
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
