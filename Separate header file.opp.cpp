#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;	
class Student {
	string name;
	int roll;
public:
	void setData(string n, int r);
	void display();
};
#endif


