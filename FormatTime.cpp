#include <iostream>
using namespace std;
class TimeFormat {

	int hours;
	int minutes;
	int seconds;
public:
	TimeFormat() {
		hours = minutes = seconds = 0;
	}
	TimeFormat(int h, int m, int s) {
		hours = h;
		minutes = m;
		seconds = s;
	}
	void current_time() {
		cout << hours << ":" << minutes << ":" << seconds << endl;
		//cout << hours << ":" << minutes << ":" << seconds << endl;

	}

	void add_time(TimeFormat T1, TimeFormat T2) {
		this->hours = T1.hours + T2.hours;
		this->minutes = T1.minutes + T2.minutes;
		this->seconds = T1.seconds + T2.seconds;



	}
	void get_time() {
		cout << "Enter time:" << endl;
		cout << "Hours? ";
		cin >> hours;
		if (hours >= 24 || hours < 0) {
			cout << "Invalid Hours";
			exit(0);

		}
		if (hours > 12) {
			hours -= 12;
		}
		cout << "Minutes? ";
		cin >> minutes;
		if (minutes >= 60 || minutes < 0) {
			cout << "Invalid Minutes";
			exit(0);
		}
		cout << "Seconds? ";
		cin >> seconds;
		if (seconds >= 60 || minutes < 0) {
			cout << "Invalid Seconds";
			exit(0);

		}

	}

};
int main() {
	TimeFormat T1, T2, T3;
	T1.get_time();
	T1.current_time();
	T2.get_time();
	T2.current_time();
	T3.add_time(T1, T2);
	T3.current_time();
	return 0;




};

