#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	int a[100001] = {};

	for (int i = 1; i <= n; i++) {
		int temp;
		cin >> temp;
		a[i] = a[i - 1] + temp;
	}

	for (int j = 0; j < m; j++) {
		int start, end;
		cin >> start >> end;

		cout << a[end] - a[start - 1] << "\n";
	}

	return 0;
}
