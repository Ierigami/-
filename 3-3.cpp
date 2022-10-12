#include <iostream>
#include <fstream>//для работы с файлами
using namespace std;

int main() {
	//cоздание файла и его заполнение
	setlocale(LC_ALL, "Russian");
	ofstream fout("failik.txt”); // создание объекта
	fout.open("failik.txt"); //объект связывается с файлом?
	fout << "Hello world";
	fout.close();

	//чтение файла
	char m[50];
	ifstream file("failik.txt");
	file.getline(m, 50);//запись содержимого файла
	file.close();
	cout << m;
	return 0;
