#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int loop = 0;
	while (loop <= 1)
	{
		int a, b, var;
		cout << "������� ������ �����" << endl;
		cin >> a;
		cout << "������� ������ ����� �����" << endl;
		cin >> b;
		cout << "\t�������� ��������\n" << "1 - �������\n" << "2 - �������\n" << "3 - ��������\n" << "4 - ������\n" << endl;
		cin >> var;
		switch (var)
		{
		case 1:
			cout << "���������� : " << a + b << endl;
			break;
		case 2:
			cout << "���������� : " << a - b << endl;
			break;
		case 3:
			cout << "���������� : " << a * b << endl;
			break;
		case 4:
			cout << "���������� : " << (double)a / b << endl;
			break;
		default:
			cout << "���������� ��������" << endl;
			break;
		}
		cout << "1 - ���������\n2 - �����" << endl;
		cin >> loop;
	}
}

  
