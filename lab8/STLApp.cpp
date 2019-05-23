#include "pch.h"
#include <iostream>
#include <vector>
#include "Student.h"
#include <list>
#include "Complex.h"
#include <queue>

using namespace std;

void stud();
void comp();
void carWash();

int main()
{
	char selection = 0;

	cout
		<< "Hello! This is a program designed to work with and store data structures." << endl
		<< "This program has three operating modes: " << endl
		<< "1. Store student data." << endl
		<< "2. Store complex numbers." << endl
		<< "3. Organize a queue at a car wash." << endl
		<< "0. Exit the program." << endl;

	do
	{
		cout << "Choose the desired mode by typing its correlating number: ";
		cin >> selection;
		switch (selection)
		{
		case '1':
			stud();
			break;
		case '2':
			comp();
			break;
		case '3':
			carWash();
			break;
		case '0':
			cout << "Program shutting down...";
			break;
		default:
			cout << "Invalid option. Please try again." << endl;
		}
	} while (selection != '0');
}

void stud()
{
	static vector <student> vec;
	student tmp;

	cout << "Enter student's name: ";
	cin >> tmp.name;
	cout << "Enter student's surname: ";
	cin >> tmp.surname;
	cout << "Enter student's age: ";
	cin >> tmp.age;
	cout << "Enter student's faculty: ";
	cin >> tmp.faculty;
	cout << "Enter student's level of grant: ";
	cin >> tmp.level_of_grant;

	vec.push_back(tmp);

	cout << "Successfully saved student data!" << endl << endl;
}

void comp()
{
	static list <complex> list;
	complex tmp;

	cout << "Enter the number's real part: ";
	cin >> tmp.real;
	cout << "Enter the number's imaginary part: ";
	cin >> tmp.imaginary;

	list.push_back(tmp);

	cout << "Successfully saved complex number!" << endl << endl;

}

void carWash()
{
	static queue <string> queue;
	string tmp = { 0 };

	cout << "Enter your car's description: ";
	getline(cin >> ws, tmp);				//"ws" ignores whitespaces.

	queue.push(tmp);

	cout << "Successfully added car to queue!" << endl << endl;
}
