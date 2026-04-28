#include<iostream>
using namespace std;
struct Student{
	string firstName;
	string lastName;
	int rollNumber;
	float marks;
void displayStudentInfo(){
		cout<<"Full Name :"<< firstName << ""<<lastName<<endl;
		cout<<"Marks :" <<marks<<endl;
	}
	
};
int main(){
	Student s1;
	Student *ptr;
	ptr = &s1 ;
	ptr->firstName = "Sara";
	ptr->lastName = "Ayesha";
	ptr->rollNumber = 109;
	ptr->marks = 92;
	ptr->displayStudentInfo();
	return 0; 
	
}
