#include <iostream>
#include <string>
using namespace std;
struct Student {
	string id;
	string nickname;
	string lineid;
	string phone;
};
int main() {
	Student s1; // ตัวแปรเดี่ยวของ struct
	cout << "=== Input Student 1 ===\n";
	// TODO: cin >> ...
	cout << "Enter of id ";
	cin >> s1.id;

	cout << "Enter of nickname ";
	cin >> s1.nickname;

	cout << "Enter of lineid ";
	cin >> s1.lineid;

	cout << "Enter of phone ";
	cin >> s1.phone;

	cout << "\n=== Output Student 1 ===\n";
	// TODO: cout << ...
	cout << "ID\t\tNickname\tLineID\t\tPhone\n";
	cout << s1.id << "\t" << s1.nickname << "\t\t" << s1.lineid << "\t\t" << s1.phone << "\n";

	return 0;
}