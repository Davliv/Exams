#include"stdafx.h"
#include<iostream>
#include <string>

using namespace std;

struct Person {
	int age;
	string name;
	string genus;
	string email;
};
void first_obj(Person &human) {
	cout << "Enter your name, age, genus, email" << endl;
	cin >> human.name >> human.age >> human.genus >> human.email;
	cout << endl << endl;
}
void print_obj(Person const human) {
	cout << "Your name is " << human.name << endl;
	cout << "Your age is " << human.age << endl;
	cout << "Your genus is " << human.genus << endl;
	cout << "Your email is " << human.email << endl;
	cout << endl << endl;
}
int main() {
	Person jhon;
	Person jack;

	first_obj(jhon);
	print_obj(jhon);
	first_obj(jack);
	print_obj(jack);
}