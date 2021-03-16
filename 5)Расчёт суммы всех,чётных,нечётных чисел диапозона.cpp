#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int var,summ = 0,from, to;
	cout << "Введите начало диапозона :" << endl;
	cin >> from;
	cout << "Введите конец диапозона :" << endl;
	cin >> to;
	cout << "\tВыберети действие\n1 - Сумма всех чисел\n2 - Сумма всех чётных чисел\n3 - сумма всех нечётных чисел" << endl;
	cin >> var;
	switch (var)
	{
	case 1:
		do
		{
			summ += from;
			from++;
		} 
		while (from <= to);
		cout << "Сумма всех чисел равна :" << summ << endl;
		break;
	case 2:
		do
		{
			if (from % 2 == 0)
			{
				summ += from;
			}
			from++;
		} 
		while (from <= to);
		cout << "Сумма всех чётных чисел равна :" << summ << endl;
		break;
	case 3:
		do
		{
			if (from % 2 != 0)
			{
				summ += from;
			}
			from++;
		}
		while (from <= to);
		cout << "Сумма всех не чётных чисел равна :" << summ << endl;
		break;
	}
}