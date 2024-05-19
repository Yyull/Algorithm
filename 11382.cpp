#include <iostream>
using namespace std;

int main() {

	// a, b, c의 범위가 10^12이므로 *3을 했을 때 int 자료형의 범위를 초과하기 때문에 long long 자료형 사용
	long long a, b, c;
	cin >> a >> b >> c;
	cout << a + b + c;

}