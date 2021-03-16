#include<iostream>
#include<ctime>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
		srand(time(NULL));
		const int SIZE = 10;
		int arr[SIZE];
		for (int i = 0;i < SIZE;i++)
		{
			arr[i] = rand() % 20;
			for (int b = 0;b < i;b++)
			{
				if(arr[i]==arr[b])
				{
				arr[i]= rand() % 20;
				b = 0;
				}
			}
		}
		for(int i =0;i<SIZE;i++)
		{
			cout << arr[i] << endl;
		}




}