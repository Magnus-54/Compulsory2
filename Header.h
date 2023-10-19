#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

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
double polynomial_function(int a, int b, int c, int d, int x)
{
	double end_result = (a * pow(x, 3)) + (b * pow(x, 2)) + (c * x) + d;

	return end_result;
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