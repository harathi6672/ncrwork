#include<iostream>
using namespace std;
class Complex {
	float real;
	float img;
public:
	Complex() {
		real = img = 0;

	}
	Complex(float r, float i) {
		real = r;
		img = i;
	}
	Complex(float r) {
		real = img = r;
	}
	Complex(const Complex &c) {
		real = c.real;
		img = c.img;
	}
	friend Complex add_complex(Complex &i, Complex&j);
	friend Complex mul_complex(Complex &i, Complex &j);


};

Complex add_complex(Complex &i, Complex &j) {
	Complex t;

	t.real = i.real + j.real;
	t.img = i.img + j.img;


}
Complex mul_complex(Complex &i, Complex &j) {
	Complex t;
	t.real = (i.real * j.real) - (i.img *j.img);
	t.img = (i.real * j.img) + (i.img * j.real);
}






int main() {
	Complex C1(9, 6), C2(4, 3);
	add_complex(C1, C2);






}