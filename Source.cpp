#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "Russian");
	/*
	int a, b, c,d,w;
	cin >> a >> b >> c;
	d = 0;
	w = 0;
	if (a > 0) {
		d += 1;
	}
	if (a < 0) {
		w += 1;
	}
	if (b > 0) {
		d += 1;
	}
	if (b < 0) {
		w += 1;
	}
	if (c > 0) {
		d += 1;
	}
	if (c < 0) {
		w += 1;
	}
	cout << "polozit - " << d << endl;
	cout << "otrizat - " << w << endl;*/
	/*
	int x,y;
	cin >> x;
	if (x > 0) {
		y = 2*x - 10;
	}
	if (x == 0) {
		y = 0;
	}
	if (x < 0) {
		y = 2 * abs(x) - 1;
	}
	cout << y;*/

	/*
	int a, b;
	cin >> a >> b;
	if (a >= 20 && b <= 42) {
		cout << " Вы приняты!";

	}
	else {
		cout << "Не принят EZ ";
	}*/

	int x, y;
	cin >> x >> y;
	if (x > 0 && y > 0) {
		cout << "1-ая";

	}
	if (x > 0 && y < 0) {
		cout << "4-ая";

	}
	if (x < 0 && y > 0) {
		cout << "2-ая";
	}
	if (x < 0 && y < 0) {
		cout << "3-ая";
	}
}

