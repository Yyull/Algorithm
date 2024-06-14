#include <iostream>
using namespace std;

int main() {

	int a[42], cnt = 0;
	std::fill(a, a + 42, 0);

	for (int i = 0; i < 10; i++) {
		int n;
		cin >> n;

		int temp = n % 42;
		a[temp] += 1;
	}

	for (int i = 0; i <= 41; i++) {
		if (a[i] != 0) {
			cnt++;
		}
	}

	cout << cnt << "\n";
}