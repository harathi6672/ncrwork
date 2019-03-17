#include<iostream>
using namespace std;
class swapp
{

public:
	int a, b;
	void input()
	{
		cout << "enter 2 numbers to swap";
		cin >> a >> b;
		getchar();
	}
	void value(int i, int j)
	{
		i = i + j;
		j = i - j;
		i = i - j;
	}
	void reference(int &l, int &m)
	{
		l = l + m;
		m = l - m;
		l = l - m;
	}
};
int main()
{
	int c;
	swapp s1;
	s1.input();
	cout << "1.call by value" << endl;
	cout << "2.call by reference" << endl;

	cout << "enter an option";
	cin >> c;
	getchar();


	switch (c)
	{
	case 1: cout << "call by value";
		s1.value(s1.a, s1.b);
		cout << s1.a << s1.b;
		break;
	case 2: cout << "call by reference";
		s1.reference(s1.a, s1.b);
		cout << s1.a << s1.b;
		break;
	}
	getchar();
	return 0;
}