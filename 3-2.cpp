#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float s, m, n;
	cout << "Введите сумму займа, значение месячных выплат и срок займа : ";
	cin >> s >> m >> n;
	if (n <= 0) {
		cout << "Вы хотите взять займ на отрицательное или нулевое количество лет ? Никаких вам займов.\n";
	}
	else if (m <= 0) {
		cout << "Вы не можете взять займ и не платить за него…\n";
	}
	else if (s <= 0) {
		cout << "Не хотите брать займ ? А что вы вообще тут забыли…\n";
	}
	else {
		if (s == 12 * n * m) {
			cout << "p = 0";
		}
		else {
			for (int i = 1; i < 100; i++) {
				float r = i / 100.0;
				float x = pow((1 + r), n);
				if (abs(((s * r * x) / (12 * (x - 1))) - m) < 0.1) 
				/*if ((s * r * x) / (12 * (x - 1)) > m )*/ {
					cout << "Правильный ответ : " << i << "\n";
					return 0;
				}
				else {
					cout << i << endl;
				}

			}
		}
	}
}
