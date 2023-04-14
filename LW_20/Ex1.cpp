// Найти количество четных элементов файла.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{

	ifstream f;
	string s;
	s = "111.txt";
	cout << "Name: " << s;
	f.open(s);

	if (!f.is_open())
	{
		cout << "eror";
		return 0;
	}

	int n;
	int x = 0;
	bool flag = true;

	while (!f.eof() && f >> n)
	{
		if (n % 2 == 0)
			x += 1;
	}

	cout << "X = " << x;
}