#include <iostream>
#include <iomanip> // setprecision 사용을 위해 추가
using namespace std;

int main() {
    int n;
    double a[1001], max = 0;
    double avg, sum = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] > max) {
            max = a[i];
        }
    }

    for (int i = 0; i < n; i++) {
        a[i] = (a[i] / max) * 100;
        sum += a[i];
    }

    avg = sum / n;

    cout << fixed << setprecision(6) << avg << "\n";

    return 0;
}

