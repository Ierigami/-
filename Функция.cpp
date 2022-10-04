
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float x, b, y, ans;
	cout << "Введите x, b, y: ";
	cin >> x >> b >> y;
	if (((b - y) > 0) && ((b - x) >= 0)) {
		ans = log(b - y) * sqrt(b - x);
		cout << "Результат выражения: " << ans << '\n';
	}
	else {
		if (((b - y) <= 0) && (((b - x) < 0))) {
			cout << "Выражения под корнем и логарифмом недопустимы.\n";
			return 0;
		}
		if ((b - y) <= 0) {
			cout << "Выражение под логарифмом недопустимо.\n";
			return 0;
		}
		if (((b - x) < 0)) {
			cout << "Выражение под корнем недопустимо\n";
			return 0;
		}
	}
}
