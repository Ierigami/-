#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, m;
	cout << "Введите число: ";
	cin >> m;
	for (i = m; i < m + 10; i++){
		if (i > 0) {
			if (i == (m + 9)) {
				cout << i << '.';
			}
			else {
				cout << i << ", ";
			}
		}	
	}
	return 0;
}
