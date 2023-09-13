// cgt215_lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>

using namespace std;

void printMenu(int& choice)
{
	cout << endl;
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
	cout << endl;
	cout << A << " + " << B << " = " << A + B;
	cout << endl;
}

void secondChoice(float A, float B)
{
	cout << endl;
	cout << A << " - " << B << " = " << A - B;
	cout << endl;
}

void thirdChoice(float A, float B)
{
	cout << endl;
	cout << A << " * " << B << " = " << A * B;
	cout << endl;
}

void fourthChoice(float A, float B)
{
	cout << endl;
	cout << A << " / " << B << " = " << A / B;
	cout << endl;
}
void fifthChoice(float A, float B)
{
	cout << endl;
	cout << "nope i give up" << endl;
	cout << endl;
}


int main() {
	int choice;
	float A;
	float B;
	printMenu(choice);
	getChoices(A, B);

	if (choice == 1) {
		firstChoice(A, B);
	}
	if (choice == 2) {
		secondChoice(A, B);
	}

	if (choice == 3) {
		thirdChoice(A, B);
	}
	if (choice == 4) {
		fourthChoice(A, B);
	}
	else {
		fifthChoice(A, B);
	}



}


