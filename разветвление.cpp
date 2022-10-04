
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float a, x, w;
	cout << "Введите а, x: ";
	cin >> a >> x;
  if (abs(x) == 0){
    cout << "Выражение под логарифмом не может быть равно 0";
  }
	if (abs(x) < 1) {
		w = a * log(abs(x));
		cout << "Ответ: " << w << '\n';
	}
	else {
		if ((a - x * x) > 0) {
			w = sqrt(a - x * x);
			cout << "Ответ: " << w << '\n';
		}
		else {
			cout << "Выражение под скобкой меньше нуля." << '\n';
		}
	}
	return 0;
}
