// cgt215_lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void printMenu(int& choice) 
{
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;

	cout << "\nYour Selection: ";
	cin >> choice;
}

void getChoices(float& A, float& B) 
{
	cout << "Please enter the first value:";
	cin >> A;
	cout << "Please enter the second value:";
	cin >> B;
}

void firstChoice(float A, float B) 
{
	cout << "This is proving the first choice ran" << endl;
}

void secondChoice(float A, float B)
{
	cout << "This is proving the second choice ran" << endl;
}

int main() {
	int choice;
	float A;
	float B;
	printMenu(choice);
	cout << endl;
	getChoices(A, B);
	

	if (choice == 1) 
	{
		cout << endl;
		cout << A << "+" << B << "=" << A + B;
	}

	if (choice == 2) 
	{

		cout << endl;
		cout << A << "-" << B << "=" << A - B;
	}

	if (choice == 3) 
	{
		cout << endl;
		cout << A << "*" << B << "=" << A * B;
	}

	if (choice == 4) 
	{
		cout << endl;
		cout << A << "/" << B << "=" << A / B;
	}

	if (choice > 4)
	{
		cout << endl;
		cout << "nope i give up" << endl;
		return 0;
	}

	if (choice < 0)
	{
		cout << endl;
		cout << "nope i give up" << endl;
		return 0;
	}



	return 0;
}