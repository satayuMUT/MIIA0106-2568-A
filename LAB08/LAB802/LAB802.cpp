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
int main() {
	const int SIZE = 5;
	Student students[SIZE]; // Array ของ struct

	// INPUT
	for (int i = 0; 
		i < SIZE; 
		i++) {

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
	// OUTPUT
	cout << "\n===== Student List =====\n";
	cout << "ID\t\tNickname\tLineID\t\tPhone\n";
	for (int i = 0; i < SIZE; i++) {
		// TODO: cout << students[i]...

		cout << students[i].id << "\t" << students[i].nickname << "\t\t" << students[i].lineid << "\t\t" << students[i].phone << "\n";
		cout << "----------------------\n";
	}
	return 0;

	}
