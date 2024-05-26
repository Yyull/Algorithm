#include <iostream>
using namespace std;

int main() {

	int n, cnt = 0;
	cin >> n;

	int a[101];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int v;
	cin >> v;

	for (int j = 0; j < n; j++) {
		if (a[j] == v)
			cnt++;
	}

	cout << cnt; 
	return 0;

}