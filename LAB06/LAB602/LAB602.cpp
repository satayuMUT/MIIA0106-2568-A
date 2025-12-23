#include <iostream>
#include <string>

using namespace std;
void displayStudentInfo(string name, string id, double score, char grade)
{
	cout << "Student Name: " << name << "\n";
	cout << "Student ID : " << id << "\n";
	cout << "Score : " << score << "\n";
	cout << "Grade : " << grade << "\n";
}

void calculateGrade(double score, char& grade)
{
	if (score >= 90) grade = 'A';
	else if (score >= 80) grade = 'B';
	else if (score >= 70) grade = 'C';
	else if (score >= 60) grade = 'D';
	else grade = 'F';
}
int main()
{
	const int N = 5;
	string names[N],ids[N];
	double scores[N];
	char grades[N];
	for (int i = 0; i < N; i++)
	{
		cout << "Enter student name: ";
		cin.ignore();
		getline(cin, names[i]);
		cout << "Enter student ID: ";
		getline(cin, ids[i]);
		cout << "Enter student score: ";
		cin >> scores[i];

		calculateGrade(scores[i], grades[i]);
	}
	for (int i = 0; i < N; i++)
	{
		cout << "-----------------------\n";
		displayStudentInfo(names[i], ids[i], scores[i], grades[i]);
		cout << "-----------------------\n";
	}
	return 0;
}