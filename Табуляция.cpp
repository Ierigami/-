#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "x       " << "y" << '\n';
	for (float i = -4; i <= 4; i += 0.5) {
		if (i == 1) {
			cout << i << "  Нет значения\n";
		}
		else {
			float y = (i * i - 2 * i + 2) / (i - 1);
			cout << i << "     " << y << '\n';
		}
	}
	return 0;
}
