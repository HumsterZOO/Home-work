#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int wigth, height;
	cout << "Введите ширину прямоугольника." << endl;
	cin >> wigth;
	cout << "Введите высоту прямоугольника." << endl;
	cin >> height;
	for (int a = 0;a < height;a++)
	{
		for (int b = 0;b < wigth;b++)
		{
			cout << "*";
		}
		cout<< endl;
	}
}