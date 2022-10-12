#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float s, m, n;
	cout << "Введите сумму займа, значение месячных выплат и срок займа : ";
	cin >> s >> m >> n;
	if (n =< 0) {
		cout << "Вы хотите взять займ на отрицательное количество лет ? Никаких вам займов.\n";
		return 0;
	}
	if (m <=)  0) {
		cout << "Вы не можете взять займ и не платить за него…\n";
		return 0;
	}
	if (s <= 0) {
		cout << "Не хотите брать займ ? А что вы вообще тут забыли…\n";
		return 0;
	}
	else {
		cin >> s >> m >> n;
		for (int i = -100; i < 100; i++) {
			float r = i / 100;
			float x = pow((1 + r), n);
			if ((s * r * x / (12 * (x - 1))) - m < 0, 01) {
				cout << "Правильный ответ : " << i << "\n";
				return 0;
			}
		}
	}
