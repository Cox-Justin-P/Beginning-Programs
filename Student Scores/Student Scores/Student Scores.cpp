#include <iostream>
#include<string>
using namespace std;

// Testing to see if my changes can be pushed!!
//This is a program where you can enter in the students name and scores and get some nifty results
/*************************************************************************************************
*	INPUT
*	-student names
*	-student scores
*
*	OUTPUT
*	-students names with their letter grade
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
	
	//have the user enter in the grades
	cout << "Please enter in the number grade that each student received: " << endl;
	int numGrades[5];
	for (int i = 0; i < 5; i++) {
		cout << studentNames[i] + ": ";
		cin >> numGrades[i];
		
		// get the letter grade
		char letterGrade;
		if(numGrades[i] >= 90) {
			letterGrade = 'A';
			cout << studentNames[i] << "'s letter grade is: " << letterGrade << endl;
		}
		else if (numGrades[i] < 90 && numGrades[i] >= 80) {
			letterGrade = 'B';
			cout << studentNames[i] << "'s letter grade is: " << letterGrade << endl;
		}
		else if (numGrades[i] < 80 && numGrades[i] >= 70) {
			letterGrade = 'C';
			cout << studentNames[i] << "'s letter grade is: " << letterGrade << endl;
		}
		else if (numGrades[i] < 70 && numGrades[i] >= 60) {
			letterGrade = 'D';
			cout << studentNames[i] << "'s letter grade is: " << letterGrade << endl;
		}
		else if (numGrades[i] < 60) {
			letterGrade = 'F';
			cout << studentNames[i] << "'s letter grade is: " << letterGrade << endl;
		}
	}
	



}


