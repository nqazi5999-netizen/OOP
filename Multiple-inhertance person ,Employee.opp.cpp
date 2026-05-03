#include<iostream>
using namespace std;
class Person {
protected:
	string name;
	int age;
public:
	void getPerson () {
		cout << "Entre Name:";
		cin >> name;
		cout << "Entre Age:";
		cin >> age;
	}
	void display_person () {
		cout << "Name:" << name << endl;
		cout << "Age:" << age << endl;
	}
};

class Emplayee : public Person {
protected:
	int employee_id;
public:
	void getEmployee() {
		getPerson();
		cout << "Entre Employee ID:";
		cin >> employee_id;
	}
	void display_employee() {
		display_person();
		cout << "Employee ID:" << employee_id << endl;
	}
};
class Manager : public Employee {
private:
	string department;
public:
	void getManager(){
		getEmployee();
		cout << "Entre Department:" ;
		cin >> department;
		
	}
	void display_manager(){
		display_employee();
		cout << "Department:" << department << endl;
	}
};

int main (){
	Manager m;
	m.getManager();
	m.display_manager();
	return 0;
}
