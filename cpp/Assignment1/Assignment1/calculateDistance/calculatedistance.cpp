#include<iostream>
using namespace std;
class Distance2;
class Distance1 {
	int cm;
	int m;
	int result;
public:

	Distance1() {
		cm = m = 0;
	}
	Distance1(int a, int b) {
		cm = a;
		m = b;

	}
	void display() {
		cout << result << endl;
	}
	friend void add_distance(Distance1, Distance2);
};
class Distance2 {
	int inches;
	int feet;
	int result;
public:

	Distance2() {
		inches = feet = 0;
	}
	Distance2(int a, int b) {
		inches = a;
		feet = b;
	}
	void display() {
		cout << result << endl;
	}
	friend void add_distance(Distance1, Distance2);

};
void add_distance(Distance1 d1, Distance2 d2) {
	Distance1 t1;
	t1.result = d1.cm + ((d1.m) * 100) + ((d2.inches)*2.52) + ((d2.feet)*30.48);



}
int main() {
	Distance1 t1(6, 4);
	Distance2 t2(5, 9);
	add_distance(t1, t2);
	t1.display();
	return 0;



}
