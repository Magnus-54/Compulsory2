#include <iostream>
#include <string>
#include <sstream>
#include "Header.h"



// int factorial()
// if n=1
// else n*factorial(n-1)
// return result
// long unsigned int
// 
// Factorial (use recursion)
// Solving 3rd degree polynomial equations (addition, subtraction, multiplication)
// Simple math equations (addition, subtraction, multiplication and division).


int factorial_function(int factorial_input) {
	std::cin >> factorial_input;

	if (factorial_input < 1) {
		return 1;
	}
	else { return factorial_input * factorial_function(factorial_input - 1); }
}
int main() {
	int menu_input;
	


	int polynomial_function()
	{
		
	}
	int normal_calculation()
	{

	}

	std::cout << "Input the corresponding number to what you want to do \n"
		<< "\n[1] Factorial Calculator\n"
		<< "[2] 3rd degree polynomial Calcutor\n"
		<< "[3] Addition, Subtraction, Multiplication or Division\n"
		<< "[4] BIG RED BUTTON (don't press it)\n\n";
	std::cin >> menu_input;

	if (menu_input == 1) {
		factorial_function();
	}
	else if (menu_input == 2) {
		polynomial_function();
	}
	else if (menu_input == 3) {
		normal_calculation();
	}
	else { return 0; }

}

