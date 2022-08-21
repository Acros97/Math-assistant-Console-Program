// Math.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void Menu() {
	cout << "**************************" << endl;
	cout << "1 - Calculate Triangle Area" << endl;
	cout << "2 - Multiply with PI Value" << endl;
	cout << "3 - Calculate 1st. Grade Ecuation" << endl;
	cout << "4 - Calculate 2nd. Grade Ecuation" << endl;
	cout << "5 - Exit" << endl;
	cout << "**************************" << endl;
	cout << "Choose following options (1-5): ";
}

void CallOption(int option) {
	double result = 0;
	double var1 = 0;
	double var2 = 0;
	double var3 = 0;
	double PI_VALUE = 3.14159;
	// Ecuation 
	double value1, value2, xValue = 0;


	switch (option)
	{
	case 1:
		cout << "Enter base value: " << endl;
		cin >> var1;
		cout << "Enter height value: " << endl;
		cin >> var2;
		result = (var1 * var2) / 2;
		cout << "Triangle area is: " << result << endl;
		this_thread::sleep_for(chrono::milliseconds(3000));
		system("cls");
		break;

	case 2:

		cout << "Enter a value: " << endl;
		cin >> var1;
		result = var1 * PI_VALUE;
		cout << "Result (" << var1 << " * " << PI_VALUE << ") = " << result << endl;
		this_thread::sleep_for(chrono::milliseconds(5000));
		system("cls");
		break;

	case 3:
		cout << "\n";
		cout << "[num1]x + [num2] -> find 'x' value:" << endl;
		this_thread::sleep_for(chrono::milliseconds(4000));
		cout << "Insert 'num1' value: " << endl;
		cin >> value1;
		cout << "Insert 'num2' value: " << endl;
		cin >> value2;

		value2 = -value2;
		xValue = value2 / value1;
		cout << "'x' Value result is: " << xValue << endl;
		this_thread::sleep_for(chrono::milliseconds(5000));
		system("cls");
		break;

	case 5:
		cout << "Closing Program...";
		this_thread::sleep_for(std::chrono::milliseconds(2000));
		return;

	default:
		std::cout << "Choose a valid option!";
		std::this_thread::sleep_for(std::chrono::milliseconds(5000));
		system("cls");
		break;
	}
}

int main()
{
	cout << "--- Math Assistant Tool version 1.0 ---" << endl;
	int OPTION_MENU = 0;
	while (OPTION_MENU != 5) {
		Menu();
		cin >> OPTION_MENU;
		CallOption(OPTION_MENU);
	}
}