#include <iostream>
using namespace std;

int main() {

	// A/B 값을 출력해야함
	// 단, 실제 정답과 출력값의 절대오차 또는 상대오차가 10^-9이면 정답
	// float는 소수점 이하 6자리까지, double은 소수점 이하 15자리까지
	// 소수점 이하 9자리까지는 값을 출력해줘야 오차가 허용범위 안으로 들어옴
	// 따라서 double형 사용!

	double a, b;
	cin >> a >> b;

	// 그러나 double 데이터타입이 소수점 이하 15자리까지 나타낸다고 해도 출력은 그 이하로 됨
	// 소수점 고정이 필요!!
	
	cout << fixed;
	cout.precision(9);
	cout << a / b;

}