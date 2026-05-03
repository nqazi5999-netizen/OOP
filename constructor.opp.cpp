#include<iostream>
using namespace std;
class Myclass{
public:
    Myclass(){ 
        cout << "Constructor\n";
    }
	~Myclass(){ cout << "Destructor\n";}
};
int main(){
	Myclass obj;
	return 0; 
}
