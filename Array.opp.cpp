#include<iostream>
using namespace std;
struct Student{
	string firstname;
	string lastname;
	int rollNumber;
	float marks;
	 void displayStudentInfo(){
        cout << "Full Name: " << firstname << " " << lastname << endl;
        cout << "Marks: " << marks << endl;
	}
};
int main(){
	Student s[3];
	for(int i=0; i<3; i++){
		cout<<"Entre first Name:";
		cin>>s[i]. firstname;
		cout<<"Entre Last Name:";
	cin>>s[i].lastname;
	cout<<"Entre Marks :";
	cin>>s[i].marks;
	}
	for(int i=0; i<3; i++){
		s[i].displayStudentInfo();
	}
	return 0;
}
