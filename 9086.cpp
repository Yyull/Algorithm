#include <iostream>
#include <string>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {

		string s;
		cin >> s;

		cout << s[0] << s[s.length() - 1] << "\n";
	}

	return 0;
}
