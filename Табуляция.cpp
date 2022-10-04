include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float i, y;
	for (i = -4; i <= 4; i += 0.5) {
		if (i == 1) {
			cout << "Нет значения, ";
		}
		else {
			y = (i * i - 2 * i + 2) / (i - 1);
			if (i == 4) {
				cout << y << ".";
			}
			else {
				cout << y << ", ";
			}
		}
	}
	return 0;
}
