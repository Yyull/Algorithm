#include <iostream>
using namespace std;

int main() {

	int n, m;
	cin >> n >> m;

	int a[101];

	for (int x = 1; x <= n; x++) {
		a[x] = x;
	}

	for (int y = 1; y <= m; y++) {
		int i, j;
		cin >> i >> j;
		
		int temp;
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

	for (int z = 1; z <= n; z++) {
		cout << a[z] << " ";
	}
	return 0;
}