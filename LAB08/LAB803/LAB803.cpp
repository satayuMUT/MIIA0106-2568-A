#include <iostream>
#include <string>
using namespace std;
struct Student {
	string id;
    string nickname;
	string lineid;
	string phone;

};
// TODO: เขียนฟังก์ชันนี้
 void printStudent(Student s1) {
	// TODO
	cout << "\n=== Output Student 1 ===\n";
	// TODO: cout << ...
	cout << "ID\t\tNickname\tLineID\t\tPhone\n";
	cout << s1.id << "\t" << s1.nickname << "\t\t" << s1.lineid << "\t\t" << s1.phone << "\n";
}
int main() {
	Student s1;
	cout << "=== Input Student 1 ===\n";
	

	cout << "Enter of id ";
	cin >> s1.id;

	cout << "Enter of nickname ";
	cin >> s1.nickname;

	cout << "Enter of lineid ";
	cin >> s1.lineid;

	cout << "Enter of phone ";
	cin >> s1.phone;
	
	cout << "\n=== Output (from function) ===\n";
	// TODO: เรียก printStudent
	printStudent(s1);

	return 0;
}