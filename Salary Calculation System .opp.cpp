#include<iostream>
using namespace std;
class Employee {
public:
	virtual double calculateSalary() {
		cout << "Base Employee Salary calculation called."  << endl;
		return 0;
	}
};
class PermanentEmployee : public Employee{
	double basicSalary, bouns;
public:
	PermanentEmployee(double b, double bo){
		basicSalary = b;
		bonus = bo;
	}
	double calculateSalary() override
	{
		return basicSalary + bonus;
	}
};
class ContractEmployee : public Employee {
	double hourlyRate;
	int hoursWorked;
public:
	ContractEmployee(double rate, int hours){
		hourlyRate = rate;
		hoursWorked = hours;
	}
		double calculateSalary() override
	{
		return hourlyRate * hoursWorked;
	}
};
int main (){
	Employee * emp;
	PermanentEmployee p(40000, 50000);
	ContractEmployee c(800, 40);
	emp = &p;
	cout << "Permanent Employee Salary:" << emp->calculateSalary() << endl;
	emp = &c;
	cout << "Contract Employee Salary:" << emp->calculateSalary() << endl;
	return 0;
}
