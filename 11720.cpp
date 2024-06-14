#include <iostream>
using namespace std;

int main() {

	int n, sum = 0;
	cin >> n;

	string s;
	cin >> s;

	for (int i = 0; i < n; i++) {
		sum = sum + s[i] - '0';

	}

	cout << sum << "\n";
	return 0;
}