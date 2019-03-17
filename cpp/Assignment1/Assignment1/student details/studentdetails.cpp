#include<iostream>
using namespace std;
class STUDENT {
	char name[30];
	int  rollno;
	char grade;
	float m[3];
	float sum = 0;
public:
	friend ostream &operator <<(ostream &output, const STUDENT &s);
	friend istream &operator >>(istream &input, STUDENT &s);
	friend void generate_results(STUDENT s[], int n);

};
ostream &operator <<(ostream &output, const STUDENT &s) {

	output << "name" << s.name << endl;
	output << "roll no" << s.rollno << endl;
	output << "total marks" << s.sum << endl;
	output << "grade" << s.grade << endl;
	return output;

}
istream &operator >> (istream &input, STUDENT &s) {
	int i, n = 3;
	cout << "enter roll no";
	input >> s.rollno;
	cout << "enter name of max 30 characters";
	input >> s.name;
	cout << "enter marks of 3 subjects";
	for (i = 0; i < n; i++)
	{
		cin >> s.m[i];
		s.sum = s.sum + s.m[i];
	}
	return  input;
}

void generate_results(STUDENT s[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (s[i].sum > 95)
			s[i].grade = 'O';
		else if (s[i].sum > 90 && s[i].sum < 95)
			s[i].grade = 'A';
		else if (s[i].sum > 80 && s[i].sum < 90)
			s[i].grade = 'B';
		else if (s[i].sum > 50 && s[i].sum < 80)
			s[i].grade = 'C';
		else
			s[i].grade = 'E';
	}
}
int main()
{
	int i;
	const int n = 3;
	STUDENT s1[n];

	for (i = 0; i < n; i++)
		cin >> s1[i];
	generate_results(s1, n);
	for (i = 0; i < n; i++)
		cout << s1[i];


	return 0;
}


