#pragma once

#include <iostream>
#include <string>
#include <sstream>

//Function for first option; factorial calculation


int a;
int b;
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
//Function for polynomial calculations NOT FINISHED
int polynomial_function()
{
	return 0;
}
int addition(){
	std::cin >> a
		>> b;
	int end_result = a + b;
	
	return end_result;
}
int subtraction() {
	std::cin >> a
		>> b;
	int end_result = a - b;

	return end_result;
}
int multiplication() {
	std::cin >> a
		>> b;
	int end_result = a * b;

	return end_result;
}
int division() {
	std::cin >> a
		>> b;
	int end_result = a / b;

	return end_result;
}