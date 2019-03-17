#include<iostream>
#include <cmath>
using namespace std;
class point {
	int x;
	int y;
	double result;
public:
	point() {
		x = y = result = 0;
	}
	point(int a, int b) {
		x = a;
		y = b;
	}
	void display() {
		cout << "result =" << result << endl;
	}
	friend void calc_distance(point, point);




};
void calc_distance(point d1, point d2) {
	point p;
	p.result = sqrt(pow((d1.x - d2.x), 2) + pow((d1.y - d2.y), 2));
	p.display();


}
int main() {
	point p1(15, 9), p2(3, 2);
	calc_distance(p1, p2);
	return 0;
}