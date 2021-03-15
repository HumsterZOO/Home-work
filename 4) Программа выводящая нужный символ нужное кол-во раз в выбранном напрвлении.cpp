#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	
	int index=0,number, direction;
	char  tipe;
	cout << "Введите количевство нужных символов :" << endl;
	cin >> number;
	cout << "Введите нужный символ :" << endl;
	cin >> tipe;
	cout << "\tВыберите направление отоброжения\n1 - Горизонтально\n2 - Вертикально" << endl;
	cin >> direction;
	while (index < number)
	{
		if (direction == 1)
		{
			cout << tipe;
			++index;
		}
		if (direction == 2)
		{
			cout << tipe << endl;
			++index;
		}
	}

}