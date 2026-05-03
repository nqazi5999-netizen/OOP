#include<iostream>
using namespace std;
class Employee {
protected:
	string name;
	float salary;
public:
	void getEmployee(){
		cout << "Entre Name:";
		cin >> name;
		cout << "Entre Salary:";
		cin >> salary;
	}
	void display_employee(){
		cout << "Name:" << name << endl;
		cout << "Salary:" << salary << endl;
	}
};

class Developer : public Employee {
private:
	string programming_language;
public:
	void getDeveloper(){
		getEmployee();
		cout << "Entre Programming Language:";
		cin >>programming_language;
	}
	void display_developer(){
		display_employee();
		cout << programming_language << endl;
	}
};
class Designer : public Employee {
private:
	string design_tool;
public:
	void getDesigner(){
		getEmployee();
		cout << "Entre Design Tool :";
		cin >> design_tool;
	}
	void display_designer(){
		display_employee();
		cout << "Tool:" << design_tool << endl;
	}
};

int main () {
	Developer d;
	Designer ds;
	cout << "\n--- Developer ---\n";
	d.getDeveloper();
	d.display_developer();
	cout << "\n----Designer --\n";
	ds.getDesigner();
	ds.display_designer();
	return 0;
}

