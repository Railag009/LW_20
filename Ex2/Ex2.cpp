// Найти сумму кратных 7, расположенных на нечетных позициях.

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
	int y = 1;
	int x = 0;
	bool flag = true;

	while (!f.eof() && f >> n)
	{
		if (n % 7 == 0 && y % 2 != 0)
			x += 1;

		y += 1;
	}

	cout << "X = " << x;
}