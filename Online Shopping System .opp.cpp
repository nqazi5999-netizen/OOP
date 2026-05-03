# include <iostream>
using namespace std;
class Product {
protected:
	string name;
	double price;
public:
	Product(string n, double p) {
		name = n;
		price = p;
		cout << "Product Constructor Called \n";
	}
	void displayProduct() {
		cout << "Product Name:" << name << endl;
		cout << "Price:" << price << endl;
	}
};
class Electronics : public Product {
private:
	int warrantyYears:
public:
		Electronics(string n, double p, int w) : Product(n, p) {
			warrantyyears = w;
			cout << "Electronics Constructor Called\n";
		}
		void displayElectronics() {
			displayProduct ();
			cout << "Warranty:" << warrantyYears << "years\n";
		}
};
int main () {
	Electronucs e("Laptop," 1200.50 ,3);
	cout << "\n---Product Details ---\n";
	e.displayElectronics();
	return 0;
}
