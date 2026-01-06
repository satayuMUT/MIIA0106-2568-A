#include <iostream>
#include <string>
using namespace std;
struct Student {
	// TODO
	string id;
	string nickname;
	string lineid;
	string phone;
};
// TODO: swap เขียนเอง
void swapStudent(Student& a, Student& b) {
	// TODO
	Student temp = a;
	a = b;
	b = temp;

}
// TODO: sort เขียนเอง (Bubble sort)
void sortByID(Student students[], int size) {
	// TODO
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (students[j].id > students[j + 1].id) {
				swapStudent(students[j], students[j + 1]);
			}
		}
	}
}
void printStudents(Student students[], int size) {
	// TODO
	cout << "ID\t\tNickname\tLineID\t\tPhone\n";
	for (int i = 0; i < size; i++) {
		// TODO: cout << students[i]...

		cout << students[i].id << "\t" << students[i].nickname << "\t\t" << students[i].lineid << "\t\t" << students[i].phone << "\n";
		cout << "----------------------\n";
	}
}
int main() {
	const int SIZE = 5;
	Student students[SIZE];
	// INPUT
	for (int i = 0; i < SIZE; i++) {
		cout << "=== Input Student " << (i + 1) << " ===\n";
		// TODO: cin >> students[i]...
		cout << "Enter of id ";
		cin >> students[i].id;

		cout << "Enter of nickname ";
		cin >> students[i].nickname;

		cout << "Enter of lineid ";
		cin >> students[i].lineid;

		cout << "Enter of phone ";
		cin >> students[i].phone;

		cout << endl;
	}
	sortByID(students, SIZE);
	cout << "\n===== Student List (Sorted by ID) =====\n";
	printStudents(students, SIZE);
	return 0;
}
