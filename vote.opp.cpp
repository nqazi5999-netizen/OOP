#include <iostream>
using namespace std;

class Voter {
public:
    string name;
    int age;

    bool isEligible();
};

bool Voter::isEligible() {
    return age > 18;
}

int main() {
    Voter v;

    cout << "Enter Name: ";
    cin >> v.name;
    cout << "Enter Age: ";
    cin >> v.age;

    if (v.isEligible())
        cout << "Eligible to vote\n";
    else
        cout << "Not eligible to vote\n";
}
