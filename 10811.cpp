#include <iostream>
using namespace std;

int main() {

	int n, m, a[101];
	cin >> n >> m;

	for (int x = 1; x <= n; x++) {
		a[x] = x;
	}

	for (int x = 0; x < m; x++) {
		int i, j;
		cin >> i >> j;

		for (int y = 0; y <= (j - i) / 2; y++) {
			int temp = 0;
			temp = a[j - y];
			a[j - y] = a[i + y];
			a[i + y] = temp;
		}
	}

	for (int x = 1; x <= n; x++) {
		cout << a[x] << " ";
	}

}