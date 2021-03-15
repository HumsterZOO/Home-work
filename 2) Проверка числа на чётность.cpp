#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
		int a;
		cout << "Введите число для проверки на чётность" << endl;
	cin >> a;
	if (a % 2 == 0)
	{
		cout << "Ваше число чётное" << endl;
	}
	else
	{
		cout << "Ваше число не чётное" << endl;
	}
}