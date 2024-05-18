#include <iostream>
using namespace std;

int main() {

	int a, b;
	cin >> a;	
	cin >> b;

	int three, four, five, six;

	six = a * b;
	five = (b / 100) * a;
	int rest = b % 100;
	four = (rest / 10) * a;
	rest = rest % 10;
	three = rest * a;

	cout << three << "\n";
	cout << four << "\n";
	cout << five << "\n";
	cout << six << "\n";
}