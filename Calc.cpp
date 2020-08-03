#include <iostream>
using namespace std; 

class Calculator {
int valueOne, valueTwo, ans;
public:
void sum() {
	cout<< "Enter first number \n";
	cin>> valueOne;
	cout<< "Enter second number \n";
	cin>>valueTwo;
	ans = valueOne + valueTwo;
	cout<< "Answer = "  + ans;
}

void sub() {
	cout<< "Enter first number \n";
	cin>> valueOne;
	cout<< "Enter second number \n";
	cin>>valueTwo;
	ans = valueOne - valueTwo;
	cout<< "Answer = "  + ans;
}

};
int main() {
	Calculator cal;
	int option;
	cout<< "Basic Calculator \n 1. Addition \n 2. Subtraction";
	cin>> option;
	
	switch(option){
		case 1 :
		cal.sum();
		case 2 :
		cal.sub();
		default: cout<< "Invalid Entry \n";
	};
	return 0;
}
