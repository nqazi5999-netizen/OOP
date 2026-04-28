#include<iostream>
using namespace std;
class Student {
	string name;
	int rollNumber;
	float marks;
public:
	void getData(){
		cout << "Entre Name:";
		cin>>Name;
		cout << "rollNumber:";
		cin>>rollNumber;
		cout << "Entre Marks:":
		cin>>marks;
	}
	void displayData(){
		cout << "\n---Student Information ---\n";
		cout << "Name:" << name<<endl;
		cout << "Roll Number:" << rollNumber ,,endl;
		cout <<"Marks:" <<marks << endl;
	}
};
int main(){
	Student s;
	s.getData();
	s.displayData();
	return 0;
}
