#include<iostream>
using namespace std;
class Polar {
	static int count;
	int angle;
	int radius;
public:
	void get_polar() {
		count++;
		cout << "enter the radius(in cm)" << endl;

		cin >> radius;
		cout << "enter the angle(in degrees)" << endl;

		cin >> angle;

	}
	static void show_count() {
		cout << "No of active objects created are " << count << endl;

	}

};
int Polar::count;

int main() {
	Polar p1, p2, p3;
	p1.get_polar();
	p1.show_count();
	p2.get_polar();
	p2.show_count();
	system("pause");
}


