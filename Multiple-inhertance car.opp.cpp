#include<iostream>
using namespace std;
class Vehicle{
public:
	void startEngine(){
		cout << "Engine started. " << endl;
	}
	void stopEngine(){
		cout << "Engine stopped." << endl;
	}
}; 

class Car : public Vehicle {
public:
	void drive(){
		cout << "Car is being driven." << endl;
	}
	void honk(){
		cout << "Car horn is honking." << endl;
	}
};

class ElectriCar : public Car {
public:
	void chargeBattery(){
		cout << "Battery is charging." << endl;
	}
	void showBatteryStatus(){
		cout << "Battery is at 85%." << endl;
	}
};

int main() {
ElectriCar myTesla;
	myTesla.startEngine();
	myTesla.drive();
	myTesla.chargeBattery();
	myTesla.showBatteryStatus();
	myTesla.honk();
	myTesla.stopEngine();
	return 0;
}

