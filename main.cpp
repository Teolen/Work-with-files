#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	fstream ifs, ofs;
	ifs.open("input.txt", fstream::in);
	ofs.open("output.txt", fstream::out);

	if (!ofs.is_open())
	{
		cout << "Ошибка записи";
	}
	if (!ifs.is_open())
	{
		cout << "Ошибка чтения";
	}
	else
	{
		cout << "OK\n";
		int str1,str2;
		ifs >> str1;
		ifs >> str2;
		ofs << str1 + str2;
	}
	return 0;
}
