// Проверить, упорядочен ли файл по возрастанию.

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
	int x = NULL;
	bool flag = true;

	while (!f.eof() && f >> n)
	{
		if (n < x)
			flag = false;
		x = n;
	}

	if (flag == true)cout << "Yes";
	else cout << "No";
}

