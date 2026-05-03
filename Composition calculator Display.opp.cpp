#include<iostream>
using namespace std;
class Display{
private:
	double lastValue;
public:
	Display(){
		lastValue = 0;
	}
	void show(double value) {
		lastValue = value;
		cout << "Result:" << lastValue << endl;
		
	}
	double getlastValue(){
		return lastValue;
	}
};

class Calculator{
private:
	Display screen;
public:
	void add(double a, double b){
		screen.show(a + b);
	}
	void multiply(double a, double b){
		screen.show(a * b);
	}
	void showPrevious(){
		cout << "Previous Result :" << screen.getDisplay() << endl;
	}
};

int main (){
	Calculator c;
	c.add(10,5);
	c.multiply(4,3);
	c.showPrevious();
	return 0;
}
