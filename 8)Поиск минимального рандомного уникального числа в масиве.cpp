#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	const int SIZE = 10;
	int arr[SIZE];
	int minimum;
	for (int i = 0;i < SIZE;i++)
	{
		arr[i] = rand() % 20; //запись случайного числа до 20
		for (int b = 0;b < i;b++)// проверка только что записанного со всеми предыдущими числами
		{
			if (arr[i] == arr[b])
			{
				arr[i] = rand() % 20;//перезапись в случае совпадения
				b = 0;    //возврат к нулю, для того чтобы еще раз проверить новое случайное число на совпадения
			}
		}
	}
	for (int i = 0;i < SIZE;i++)
	{
		cout << arr[i] << endl;  //вывод всех случайных чисел
		minimum = arr[i]; //так и не разобрался где её можно правильно инициальзовать
	}
	for (int i = 0;i < SIZE;i++) //перебор чисел
	{
		if (arr[i] < minimum)
		{
			minimum = arr[i];  // перезаписать число если оно меньше перебираемого
		}
	}
	cout << "Минимальное число : "<<minimum << endl;
	system("pause");
	return 0;
}