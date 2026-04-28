#include <iostream>
using namespace std;

class Temperature {
public:
    float celsius;

    float convert() {
        return (celsius * 9 / 5) + 32;
    }

    void display() {
        cout << "Fahrenheit: " << convert() << endl;
    }
};

int main() {
    Temperature t;

    cout << "Enter Celsius: ";
    cin >> t.celsius;

    t.display();
}
