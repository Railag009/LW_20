// Если в файле чередуются четные и нечетные элементы, то записать в один файл все четные, иначе в другие все нечетные.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int num;
	cout << "111.txt (file with alternation)" << endl;
	cout << "121.txt (file without interleaving)" << endl;
	cout << "Please choose file, 1 or 2 - ";
	cin >> num;
	ifstream f;
	string s;
	if (num == 1) s = "111.txt";
	else s = "121.txt";	
	cout << "Name: " << s;
	f.open(s);
	int y;

	if (!f.is_open())
	{
		cout << "eror";
		return 0;
	}
	else
	{
		f >> y;
	}

	int n;
	bool flag = true;

	while (!f.eof() && f >> n)
	{
		if ((n + y) % 2 == 0) flag = false;
		y = n;
	}

	f.close();
	f.open(s);

	if (flag == true)
	{

		ofstream f1("222.txt");

		while (!f.eof() && f >> n)
		{
			if (n % 2 == 0)
				f1 << n << " ";
		}

	}
	else
	{

		ofstream f1("222.txt");

		while (!f.eof() && f >> n)
		{
			if (n % 2 != 0)
				f1 << n << " ";
		}

	}
}

