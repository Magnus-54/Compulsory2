#include <string>
#include <iostream>
#include <sstream>
#include <cmath>
#include "Header.h"

int main() {
	//defining variables used in main
	
	bool run = true;
	int menu_input;
	int factorial_input;

	 

	//loop for menu to continue after a calulation is finished
	while (run) {
		std::cout << "\n\nType the corresponding number to what you want to do \n\n"
			<< "[1] Factorial Calculator\n"
			<< "[2] 3rd degree polynomial Calcutor\n"
			<< "[3] Addition, Subtraction, Multiplication or Division\n"
			<< "[4] BIG RED BUTTON (don't press it)\n\n";
		std::cin >> menu_input;
		//Factorial Option, uses factorial_function from header
		if (menu_input == 1) {

			std::cout << "write a number and I will calculate the factorial :)\n";
			std::cin >> factorial_input;

			std::cout << factorial_function(factorial_input);
		}
		//Polynomial option, uses polynomial_function from header
		else if (menu_input == 2) {
			int a, b, c, d, x;

			std::cout << "Input what numbers you want to use\n";
			std::cout << "\na=";
			std::cin >> a;
			std::cout << "\nb=";
			std::cin >> b;
			std::cout << "\nc=";
			std::cin >> c;
			std::cout << "\nd=";
			std::cin >> d;
			std::cout << "\nx=";
			std::cin >> x;


			std::cout<<polynomial_function(a,b,c,d,x);
		}
		//sub-menu for regular calculations
		//runs the appropriate function for the task
		else if (menu_input == 3) {
			std::cout << "\n\nType the corresponding number to what you want to do \n\n"
				<< "[1] Addition (+)\n"
				<< "[2] Subtraction (-)\n"
				<< "[3] Multiplication (*)\n"
				<< "[4] Division (/)\n";
			std::cin >> menu_input;

			if (menu_input == 1) {
				std::cout << "type the first number, enter and then type the second number\n";
				std::cout<< addition();
			}

			else if (menu_input == 2) {
				std::cout << "type the first number, enter and then type the second number\n";
				std::cout << subtraction();
			}

			else if (menu_input == 3) {
				std::cout << "type the first number, enter and then type the second number\n";
				std::cout << multiplication();
			}

			else if (menu_input == 4) {
				std::cout << "type the first number, enter and then type the second number\n";
				std::cout << division();
			}

		}

		else if (menu_input == 4) {
			std::cout << ":(";

			run = false;


		}
	}

}

