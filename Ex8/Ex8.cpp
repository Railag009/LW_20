// Если сумма элементов файла, стоящих на кратных 3 позициях, больше введенного с клавиатуры числа, то записать в новый файл
// все элементы, в записи которых встречается 2, иначе все двухзначные в другой.

#include<iostream>
#include<fstream>
using namespace std;

int duo(int a)
{

	if (a == 0) return 0;
	if (a % 10 == 2) return duo(a / 10) + 1;
	return duo(a / 10);

}
int lim(int a)
{
	if (a < 100 && a > 9)return 1;
	return 0;
}

int main()
{
	int num;
	ifstream f;
	string s;
	s = "111.txt";
	cout << "Name: " << s << endl;
	f.open(s);
	int y;

	if (!f.is_open())
	{
		cout << "eror";
		return 0;
	}

	cout << "Enter number - ";
	cin >> y;

	int n;
	bool flag = true;
	int i = 1;
	int sum = 0;

	while (!f.eof() && f >> n)
	{
		if (i % 3 == 0) sum += n;
		i++;
	}

	f.close();
	f.open(s);

	if (sum > y)
	{

		ofstream f1("222.txt");

		while (!f.eof() && f >> n)
		{
			if (duo(abs(n)) > 0)
				f1 << n << " ";
		}

	}
	else
	{

		ofstream f1("222.txt");

		while (!f.eof() && f >> n)
		{
			if (lim(n) > 0)
				f1 << n << " ";
		}

	}
}

