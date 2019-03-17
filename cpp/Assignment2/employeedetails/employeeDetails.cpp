#include<iostream>
using namespace std;
class employee
{
	int empno;
	char name[30];
	float salary;
public:
	employee()
	{
		int empno = 0;
		char name[30] = "employee name";
		float salary = 10.02;
		//cout << "emp no" << empno << '\n' << "name" << name << '\n' << "salary" << salary << endl;
	}

	~employee()
	{
		cout << "object deleted" << endl;
	}
	friend istream& operator >> (istream& cin, employee &s);
	friend ostream& operator<<(ostream&cout, const employee &s);
};
istream& operator >> (istream &cin, employee &s)
{
	int i, n = 5;
	cout << "enter employee no";
	cin >> s.empno;
	cout << "enter employee name";
	cin >> s.name;
	cout << "enter salary";
	cin >> s.salary;

	return cin;
}
ostream & operator<<(ostream &cout, const employee &s)
{
	cout << "emp no" << s.empno << endl;
	cout << "name " << s.name << endl;
	cout << "salary " << s.salary << endl;

	return cout;
}
int main()
{
	employee e[5];

	int i;
	const int n = 5;
	for (i = 0; i < n; i++)
		cin >> e[i];
	for (i = 0; i < n; i++)
		cout << e[i];
	system("pause");

	return 0;
}