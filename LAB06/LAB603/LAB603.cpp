#include <iostream>
#include <string>

using namespace std;
int main()
{
	const int N = 3;
	const int M = 4;

	string names[N], ids[N];
	double scores[N][M];
	double totalScores[N];
	char grades[N];
	for (int i = 0; i < N; i++)
	{
		totalScores[i] = 0;
		cout << "Enter student name: ";
		cin.ignore();
		getline(cin, names[i]);
		cout << "Enter student ID: ";
		getline(cin, ids[i]);
		for (int j = 0; j < M; j++)
		{
			cout << "Enter score for subject " << (j + 1) << ": ";
			cin >> scores[i][j];
			totalScores[i] += scores[i][j];
		}
		double averageScore = totalScores[i] / M;
		if (averageScore >= 90) grades[i] = 'A';
		else if (averageScore >= 80) grades[i] = 'B';
		else if (averageScore >= 70) grades[i] = 'C';
		else if (averageScore >= 60) grades[i] = 'D';
		else grades[i] = 'F';
	}

	for (int i = 0; i < N; i++)
	{
		cout << "-----------------------\n";
		cout << "Student Name: " << names[i] << "\n";
		cout << "Student ID : " << ids[i] << "\n";
		cout << "Total Score : " << totalScores[i] << "\n";
		cout << "Grade : " << grades[i] << "\n";
		cout << "-----------------------\n";
	}
	return 0;


}
