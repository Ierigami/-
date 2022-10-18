#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	ofstream fout("failik.txt"); // создание объекта
	string filespace;
	getline(cin, filespace);
	fout << filespace;
	fout.close();
	ifstream file("failik.txt");
	while (getline(file, filespace))
	{
		for (int i = 0; i < filespace.length() - 1; i++)
			for (int j = 0; j < filespace.length() - 1; j++)
				if (tolower(filespace[j]) > tolower(filespace[j + 1])) {
					char c = filespace[j];
					filespace[j] = filespace[j + 1];
					filespace[j + 1] = c;
				}
		cout << filespace << '\n';
	}
	file.close();
}
