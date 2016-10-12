#include <iostream>
#include<string>
using namespace std;

//This is a program where you can enter in the students name and scores and get some nifty results
/*************************************************************************************************
*	INPUT
*	-student names
*	-student scores
*
*	OUTPUT
*	-students names with their scores averaged
*
*/

int main() {
	string studentNames[5];

	cout << "Please enter the names of 5 students: " << endl;
	for (int i = 0; i < 5; i++) {
		i++;
		cout << i << ". ";
		i--;
		cin >> studentNames[i];
	}
	
	//output the list of students
	cout << "Here are the students that you chose: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << studentNames[i] << endl;
	}


}


