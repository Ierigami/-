#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, “Russian”);
	float s, p, n;
	cout << «Введите сумму займа, процент и срок займа: «;
	cin >> s >> p >> n;
	if (n < 0) {
		cout << « Вы хотите взять займ на отрицательное количество лет? Никаких вам займов.\n»;
	}
	Else if (s <= 0) {
		cout << «Не хотите брать займ? А что вы вообще тут забыли…\n»;
	}
	Else if (p == 0){
		Cout << “сумма вашего ежемесячного платежа – “ << s/(n*12) << ’\n’;
	else {
		float r = p / 100;
		float x = (pow((1 + r), n));

		float m = s * r * x / (12 * (x – 1));
		cout << m << ‘\n’;
	}

}
