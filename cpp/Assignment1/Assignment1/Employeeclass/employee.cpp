#include<iostream>
using namespace std;
class employee
{
	int m = 0;
public:
	employee()
	{
		cout << "i am in default constructor" << '\n';
	}
	employee(int i)
	{
		cout << "i am in parameterized constructor" << '\n';
	}
	employee(const employee &c)
	{
		cout << "i am in copy constuctor" << '\n';
	}
	void value()
	{
		employee t(4);
		cout << "i am in value" << '\n';
		//cout << "value" << t.m;
	}
	void reference(employee &p)
	{
		employee &k = p;
		p.m = 5;
		cout << "i am in reference" << '\n';
		cout << "control doesnot go to constructor as object is not created,reference is created" << '\n';
		cout << "value" << k.m;
	}

};
int main()
{
	employee e1;
	employee e2(e1);
	//e2(e1);
	e2.value();
	e1.reference(e2);
	getchar();
	return 0;
}