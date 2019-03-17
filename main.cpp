/**
 * SIMPLE CLOCK IN C++
 ---------------------
 * Coded by Hamza Shafique
 * https://github.com/HamzaMughal4U
*/

#include <iostream> // std::cout 
#include <iomanip> // std::setfill() and std::setw()
#include <ctime> // std::time() and std::localtime

void Round ();

int main(int argc, char** argv) {
	// this program continues execution till closed manually	

	clock: // program start point
	
	// for getting time
	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);
	
	// storing hour, min and secs
	// used auto keyword here
	// if not using c++ 11 then replace it with int or unsigned int
	auto hour = now->tm_hour; // current hour
	auto min = now->tm_min; // current minutes
	auto sec = now->tm_sec; // current seconds
	
	auto hourToDisplay = hour > 12 ? hour - 12 : hour; // storing the hour to be displayed
	
	// getting whether it is am or pm
	std::string period = hour > 12 ? "PM" : "AM";
	
	// rounding
	Round();
	std::cout << hourToDisplay; // hours in 12 hour format
	
	std::cout << ":";
	
	// rounding
	Round();
	std::cout << min; // mins
	
	std::cout << ":";
	
	// rounding
	Round();
	std::cout << sec; // secs
	
	std::cout << " " + period; // displaying am or pm
	
	system("cls"); // clearing the console
	
	goto clock; // going back to start
}

void Round ()
{
	// rounding integers to 2
	std::cout << std::setfill('0') << std::setw(2);
}

