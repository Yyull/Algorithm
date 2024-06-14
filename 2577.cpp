#include <iostream>
using namespace std;


int main() {

	int a, b, c;
	cin >> a >> b >> c;

	int num = a * b * c;
	int cnt[10] = {};

	while (num != 0) {

		cnt[num % 10]++;
		num /= 10;
	}

	for (int i = 0; i <= 9; i++) {
		cout << cnt[i] << "\n";
	}

	return 0;
}