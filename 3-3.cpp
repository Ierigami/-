#include <iostream>
#include <fstream>//для работы с файлами
#include <string>
#include <windows.h>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//cоздание файла и его заполнение
	setlocale(0, "");
	ofstream fout("failik.txt"); // создание объекта
	//чтение файла
	ifstream file("failik.txt");
	string filespace;
	for (int i = 0; i <= 3; i++) {
		setlocale(0, "");
		getline(cin, filespace);
		fout << filespace << '\n';
	}
	fout.close();

	string s;
	while (getline(file, s)) {
		setlocale(0, "");
		cout << s << '\n';
		
	}
	return 0;
}
