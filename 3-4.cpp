#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	cout << "Input filename\n";
	string filename, fileline;
	cin >> filename;
	ifstream file("./" + filename);
	if (!file) {
		cout << "Error opening file\n";
		return -1;
	}
	while (getline(file, fileline))
	{
		for (int i = 0; i < fileline.length() - 1; i++)
			for (int j = 0; j < fileline.length() - 1; j++)
				if (tolower(fileline[j]) > tolower(fileline[j + 1])) {
					char c = fileline[j];
					fileline[j] = fileline[j + 1];
					fileline[j + 1] = c;
				}
		cout << fileline << '\n';
	}
	file.close();
