#include<iostream>
using namespace std;
struct __stack__ {
	int top;
	int *s;
	int size;
};
class _stack_ {
	struct __stack__ sta;
public:
	_stack_();
	void push(int);
	int pop();
	int peek();
	bool IsEmpty();
	bool IsFull();
	void display();
	~_stack_();
	void getsize(int);



};
_stack_::_stack_() {
	sta.top = -1;
	sta.s = NULL;
	sta.size = 0;
}
void _stack_::getsize(int n) {
	sta.size = n;
	sta.s = new int[n];
}

bool _stack_::IsFull() {
	return (sta.top == (sta.size - 1));
}
bool _stack_::IsEmpty() {
	return (sta.top == -1);
}

void _stack_::push(int element) {
	if (!IsFull())
		sta.s[++sta.top] = element;
	else
		cout << "stack is full";
}

int _stack_::pop() {
	int x = -999;
	if (!IsEmpty())
		x = sta.s[sta.top--];
	else
		cout << "Stack is empty";
	return x;

}

int _stack_::peek() {
	int x = -999;
	if (!IsEmpty())
		x = sta.s[sta.top];
	else
		cout << "Stack is empty";
	return x;

}
void _stack_::display() {
	for (int i = 0; i <= sta.top;i++)
		cout << sta.s[i];
}

_stack_::~_stack_() {
	delete sta.s;
} 
int main() {
	_stack_ s;
	int  size, j, m, a, n;
	cout << "Enter the size of the stack";
	cin >> size;
	s.getsize(size);
	for (j = 0; j < 5;j++) {
		cout << "Choose an option" << endl << "1.Add an element" << endl;
		cout << "2.Delete an element" << endl << "3.peek" << endl << "4. Display" << endl;
		cin >> a;
		switch (a) {
		case 1:cout << "Enter the element";
			cin >> m;
			s.push(m);
			break;
		case 2:n = s.pop();
			cout << n;
			break;
		case 3:n = s.peek();
			cout << n;
			break;
		case 4: s.display();
			break;
		default:cout << "Invalid option" << endl;
			break;


		}
		cout << endl << endl;
	}
	system("pause");
	return 0;
}











