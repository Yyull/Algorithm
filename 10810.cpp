#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int n, m;
	cin >> n >> m;

	int a[101];
	std::fill(a, a + 101, -1);

	for (int x = 1; x <= m; x++) {
		int i, j, k;
		cin >> i >> j >> k;

		for (int y = i; y <= j; y++) {
			a[y] = k;
		}
	}

	for (int x = 1; x <= n; x++) {
		if (a[x] == -1) {
			cout << 0 << " ";
		}
		else {
			cout << a[x] << " ";
		}
	 }

	return 0;
}