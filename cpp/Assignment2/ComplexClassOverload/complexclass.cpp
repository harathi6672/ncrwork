#include<iostream>
using namespace std;
class complex
{
	int real, img;
public:
	complex()
	{
		real = img = 2;
		//cout << real << img<<'\n';
	}
	complex(int r, int i)
	{
		real = r;
		img = i;// cout << real << img<<'\n';
	}
	complex(const complex &c)
	{
		real = c.real;
		img = c.img;
		//cout << real << img<<'\n';
	}
	~complex()
	{
		//cout << "object deleted";
	}
	complex operator+(complex c)
	{
		complex res;
		res.real = real + c.real;
		res.img = img + c.img;
		return res;
	}
	complex operator-(complex c)
	{
		complex res;
		res.real = real - c.real;
		res.img = img - c.img;
		return res;
	}
	complex operator-()
	{
		complex res;
		res.real = -real;
		res.img = -img;
		return res;
	}
	complex operator()(int i, int j)
	{
		real = i;
		img = j;
		return *this;
	}
	complex operator,(complex c)
	{
		return c;
	}
	complex *operator->()
	{
		return this;
	}
	void print()
	{
		cout << "-> overloaded" << real << img;
	}
	friend ostream & operator<<(ostream &cout, const complex &s);
	friend istream & operator >> (istream &cin, complex &s);
};
ostream & operator<<(ostream &cout, const complex &c)
{
	cout << c.real << c.img << '\n';
	getchar();
	return cout;
}
istream & operator >> (istream &cin, complex &c)
{
	cout << "enter";
	cin >> c.real >> c.img;
	getchar();
	return cin;
}
int main()
{
	complex c1, c2(7, 8), c3(c2), c4, c5, c6, c7, c8, c9(6, 2);
	cin >> c1;
	cout << c1;

	c4 = c1 + c2;//
	cout << "operator + overload" << c4;

	c5 = c3 - c1;//
	cout << "- overload" << c5;

	c6 = -c1;//
	cout << "unary - overload" << c6;

	c7 = c2;//= overload
	cout << "= overload" << c7;

	c8 = (c1, c6, c7);//
	cout << ", overload" << c8;

	c9->print();

	getchar();
	return 0;
}