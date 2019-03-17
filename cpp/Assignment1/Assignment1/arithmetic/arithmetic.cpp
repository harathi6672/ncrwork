#include<iostream>
#include <cmath>
using namespace std;
class Arithmetic {
	double a;
	double b;
	double result;
	double num;
public:
	Arithmetic() {
		a = b = 0;
	}
	Arithmetic(double x, double y) {
		a = x;
		b = y;
	}
	void get_values() {
		cout << "Enter two values" << endl;
		cin >> a;
		cin >> b;


	}

	inline void add() {
		result = a + b;
		cout << "addition =" << result << endl;

	}
	inline void sub() {
		result = a - b;
		cout << "difference =" << result << endl;

	}
	inline void mul() {
		result = a * b;
		cout << "product =" << result << endl;

	}
	inline void div() {
		result = a / b;
		cout << "division" << result << endl;
	}
	inline void mod() {
		cout << "enter number to find absolute value" << endl;
		cin >> num;
		cout << "absolute value" << abs(num) << endl;

	}

};

int main() {
	Arithmetic c1;
	c1.get_values();
	c1.add();
	c1.sub();
	c1.mul();
	c1.div();
	c1.mod();
	return 0;



};
