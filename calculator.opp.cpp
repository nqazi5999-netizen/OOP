#include <iostream>
using namespace std;

class Calculator {
public:
    float num1, num2;

    float add() { return num1 + num2; }
    float subtract() { return num1 - num2; }
    float multiply() { return num1 * num2; }
    float divide() { return num1 / num2; }
};

int main() {
    Calculator c;
    int choice;

    cout << "Enter two numbers: ";
    cin >> c.num1 >> c.num2;

    cout << "1.Add 2.Subtract 3.Multiply 4.Divide\n";
    cin >> choice;

    switch(choice) {
        case 1: cout << c.add(); break;
        case 2: cout << c.subtract(); break;
        case 3: cout << c.multiply(); break;
        case 4: cout << c.divide(); break;
        default: cout << "Invalid choice";
    }
}
