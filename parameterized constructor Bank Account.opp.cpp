#include<iostream>
using namespace std;
class BankAccount {
private:
	string accountNumber;
	string accountHolder;
	double balance;
public:
	BankAccount(string accNo, string holder,double bal){
		accountNumber = accNo;
		accountHolder = holder;
		balance = bal;
	}
void showAccountDetails(){
	cout << "\nAccount Details \n";
	cout << "Account Number:" << accountNumber << endl;
	cout << "Account Holder:" << accountHolder <<endl;
	cout << " Balance:" << balance << endl;
}
};
int main(){
	string accNo, holder;
	double bal;
	cout << "Entre Account Number:";
	cin >> accNo;
	cout << "Entre Account Holder Name:";
	cin >> holder;
	cout << "Entre Balance:";
	cin >> bal;
	BankAccount b(accNo, holder, bal);
	b.showAccountDetails();
	return 0;
}
