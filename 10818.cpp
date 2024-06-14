#include <iostream>
using namespace std;

int main() {

	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	int min = 1000001, max = -1000001;
	
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;

		if (temp > max) {
			max = temp;
		}

		if (temp < min) {
			min = temp;
		}
	}
	
	cout << min << " " << max << "\n";
	return 0;
}