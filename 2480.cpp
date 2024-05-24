# include <iostream>
# include <algorithm>
using namespace std;

int main() {

	int a, b, c, m;
	cin >> a >> b >> c;

	if ((a == b) && (b == c)) {
		m = 10000 + a * 1000;
	}
	
	else if ((a == b) || (a == c)) {
		m = 1000 + a * 100;
	}

	else if (b == c) {
		m = 1000 + b * 100;
	}

	else {
		 
		m = max(a, max(b, c)) * 100;
	}

	cout << m << "\n";
	return 0;

}