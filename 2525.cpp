#include <iostream>
using namespace std;

int main() {

	int a, b, c;
	cin >> a >> b;
	cin >> c;


	if ((b + c) > 59) {

		a = a + ((b + c) / 60);
		if ((b + c) % 60 == 0) {
			b = 0;
		}

		else {
			b = (b + c) % 60;
		}

		if (a > 23) {
			a = a - 24;
		}
	}
	
	else {
		b = b + c;
	}

	cout << a << " " << b << "\n";
	return 0;
}