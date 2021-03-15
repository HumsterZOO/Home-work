#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cout << "Программа для расчёта"<< endl << "Введите первое число: "<<endl;
	cin >> a;
	cout << "Введите второе число: " << endl;
	cin >> b;
	cout << "Введите третье число: " << endl;
	cin >> c;
		cout << "Сумма равна: " << a + b + c << endl << "Произведение равно: " << a * b * c << endl << "Среднее арифметическое: "<< (double)(a + b + c) / 3 << endl;


}

