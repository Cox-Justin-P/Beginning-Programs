#include <iostream>
#include<string>
using namespace std;

//program for a calculator type thing
/******************************************************************
*INPUT
*	-2 numbers
*	-operator
*
*OUTPUT
*	-the result of the 2 numbers
*
*******************************************************************/

int main()
{
	//variables
	float num1 = 0, num2 = 0;
	string mathOperator;
	float answer = 0;

	//get the 2 numbers
	cout << "Please enter a number: ";
	cin >> num1;

	cout << "Please enter another number: ";
	cin >> num2;

	cout << num1 << " " << num2 << endl;
	
	//get the operator
	cout << "Please enter a math operator(+, -, *, /) : ";
	cin >> mathOperator;

	//output the result of the 2 numbers
	if (mathOperator == "+") {
		answer = num1 + num2;
	}
	else if (mathOperator == "-") {
		answer = num1 - num2;
	}
	else if (mathOperator == "*") {
		answer = num1 * num2;
	}
	else if (mathOperator == "/") {
		answer = num1 / num2;
	}
	else {
		cout << "Please enter a valid math operator: ";
		cin >> mathOperator;
	}

	cout << num1 << " " << mathOperator << " " << num2 << " is " << answer << endl;
	
    return 0;
}

