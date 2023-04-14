// Найти максимальный элемент файла.

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
	int max;

	if (!f.is_open())
	{
		cout << "eror";
		return 0;
	}
	else
	{
		f >> max;
	}

	int n;
	int x = 0;
	bool flag = true;

	while (!f.eof() && f >> n)
	{
		if (n > max)
			max = n;
	}

	cout << "Max = " << max;
}