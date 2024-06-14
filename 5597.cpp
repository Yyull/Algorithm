#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int a[31];
	std::fill(a, a + 31, 0);

	for (int i = 1; i <= 28; i++) {
		int n;
		cin >> n;
		a[n] = 1;
	}

	for (int i = 1; i <= 30; i++) {
		if (a[i] == 0) {
			cout << i << "\n";
		}
	}
	return 0;
}