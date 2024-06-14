#include <iostream>
using namespace std;

int main() {

	int a[10], max = 1, index;

	for (int i = 0; i < 9; i++) {
		cin >> a[i];

		if (a[i] > max) {
			max = a[i];
			index = i + 1;
		}
	}

	cout << max << "\n";
	cout << index << "\n";

	return 0;
}