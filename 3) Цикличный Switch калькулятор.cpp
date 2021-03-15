#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int loop = 0;
	while (loop <= 1)
	{
		int a, b, var;
		cout << "Введите первое число" << endl;
		cin >> a;
		cout << "Введите второе число число" << endl;
		cin >> b;
		cout << "\tВыберите действие\n" << "1 - Сложить\n" << "2 - Вычесть\n" << "3 - Умножить\n" << "4 - Делить\n" << endl;
		cin >> var;
		switch (var)
		{
		case 1:
			cout << "Получилось : " << a + b << endl;
			break;
		case 2:
			cout << "Получилось : " << a - b << endl;
			break;
		case 3:
			cout << "Получилось : " << a * b << endl;
			break;
		case 4:
			cout << "Получилось : " << (double)a / b << endl;
			break;
		default:
			cout << "Непонятное действие" << endl;
			break;
		}
		cout << "1 - повторить\n2 - выход" << endl;
		cin >> loop;
	}
}

  
