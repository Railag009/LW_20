// Если в файле есть хотя бы 3 элемента, которые ровно в 2 раза больше минимума.

#include<iostream>
#include<fstream>
using namespace std;

int main()
{

	ifstream f;
	string s;
	s = "111.txt";
	cout << "Name: " << s << endl;
	f.open(s);
	int min;
	int y = 0;

	if (!f.is_open())
	{
		cout << "eror";
		return 0;
	}
	else
	{
		f >> min;
	}

	int n;
	int x = 0;
	bool flag = true;

	while (!f.eof() && f >> n)
	{
		if (n < min)
			min = n;
	}

	f.close();
	f.open(s);

	while (!f.eof() && f >> n)
	{
		if (n > (min * 2))
			y++;
	}

	if (y > 2) cout << "Yes";
	else cout << "No";
	
}