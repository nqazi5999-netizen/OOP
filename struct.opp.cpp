#include<iostream>
using namespace std;
struct Student{
	string firstName;
	string lastName;
	int rollNumber;
	float marks;
	void displayStudentInfo(){
		cout << "Full Name: " << firstName << ' ' << lastName << endl;
		cout<<"Roll Number:" <<rollNumber << endl;
		cout<<"Marks :" << marks << endl;
	}
};
int main(){
	Student s;
	s.firstName = "Maria";
	s.lastName = "Khan";
	s.rollNumber = 23;
	s.marks = 99.5;
	s.displayStudentInfo();
	return 0 ;
}
