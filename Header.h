#pragma once

#include <iostream>
#include <string>
#include <sstream>


int factorial_function(int factorial_input) {
	std::cin >> factorial_input;

	if (factorial_input < 1) {
		return 1;
	}
	else { return factorial_input * factorial_function(factorial_input - 1); }
}
