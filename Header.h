#pragma once

#include <iostream>
#include <string>
#include <sstream>

//Function for first option; factorial calculation



int factorial_function(int factorial_input) {
	int end_result;

	if (factorial_input == 1) {
		return 1;
	}
	else {
	end_result = factorial_input * factorial_function(factorial_input - 1); 
	return end_result;
	}

}
//Function for polynomial calculations
int polynomial_function()
{
	return 0;
}
int normal_calculation()
{
	return 0;
}