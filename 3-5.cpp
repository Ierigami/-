#include <iostream>
#include <fstream>//для работы с файлами
using namespace std;

int main() {
	//cоздание файла и его заполнение
	setlocale(LC_ALL, "Russian");
	ofstream fout("failik.txt"); // создание объекта
	string filespace;
	cin >> filespace;
	fout << filespace;
	fout.close();
	//чтение файла
	char m[50];
	ifstream file("failik.txt");
	file.getline(m, 50);//запись содержимого файла
	for (int i = 0; i < size(filespace); i++) {
		if (isdigit(m[i])) {
			cout << m[i];
		}
	}
	return 0;
}

