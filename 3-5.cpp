#include <iostream>
#include <fstream>//для работы с файлами
#include <string>
using namespace std;

int main() {
	//cоздание файла и его заполнение
	setlocale(LC_ALL, "Russian");
	ofstream fout("failik.txt"); // создание объекта
	string filespace,  gg;
	for (int i = 0; i <= 9; i++) {
		getline(cin, filespace);
		fout << filespace;
		fout << '\n';
	}
	fout.close();

	//char m[1000];
	ifstream file("failik.txt");
	//file.getline(m, 1000);  //запись содержимого файла
	string s;
	while (getline(file, s)) {
		char m[50] = {0};
		for (int j = 0; j < s.length(); j++) {
			m[j] = s[j];
		}
		for (int i = 0; i < 50; i++) {
			if (isdigit(m[i])) {
				cout << m[i];
			}
			if (!isdigit(m[i])&&isdigit(m[i+1])){
				cout << " ";
			}
		}
		cout << '\n';
	}
	return 0;
}
