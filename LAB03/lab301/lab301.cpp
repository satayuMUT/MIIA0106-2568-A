#include <iostream>
#include <string>
using namespace std;

int main() {
	string studentid;
	string studentName;
	int score;
	char grade;

	cout << "Enter your student_id: ";
	cin >> studentid;

	cin.ignore();

	cout << "Enter your studentname: ";
	getline(cin, studentName);

	cout << "Enter your score: ";
	cin >> score;

	if (score >= 90) {
		grade = ' A';
	}
	else if (score >= 80) {
		grade = ' B';
	}
	else if (score >= 70) {
		grade = ' C';
	}
	else if (score >= 60) {
		grade = ' D';
	}
	else if (score <= 60) {
		grade = ' F';
	}

	cout << "\n----- Student Report -----\n";
	cout << "Student ID   : " << studentid << endl;
	cout << "Name         : " << studentName << endl;
	cout << "Score        : " << score << endl;
	cout << "Grade        : " << grade << endl;

	return 0;
}
