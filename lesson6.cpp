/*
1. �������� � ������ ������������ ���������� ������
���� int.������ ������� ��������� � ������������.
���������������� ��� ������� ��������� ������ : 1, 2, 4,
8, 16, 32, 64, 128 � ������� ������ �� �����.�� ������
���������� ������. = ) ������� ��������� �� �������.

2. ����������� �������� ������� 4�4 ���� int.
���������������� �� ���������������� ������� �����
������� rand. ������� �� �����. �������� ����
��������� �� ������� ������� ���������� �� main.
3. �������� ���������, ������� ������� ��� ���������
����� (*.txt), �������� �� 50-100 �������� � ������
(������� �������� �� ����� � ����� ������ ����������).
����� ������ ��������� � �������������.
4. * �������� �������, ������������� ��� ����� �
������ ��������� ���� (��� ������ �������� �
������������).
5. * �������� ���������, ������� ��������� ������������
�� ��������� ������������� ��� ������� ��������� �����
� ��������� ������������� ����� (��� ��������
�������� ������ � ���������). ���������� ������� find
������� ���� � ������� std::string.
*/ 

#include <iostream>
using namespace std;

int myarr1(int* arr, int size)
{
		for (size_t i = 0; i < size; i++)
	{
		int const num = 2;

		if (i==0)
		{ 
			arr[i] = 1;
			cout << arr[i] << endl;
		}
		else
		{
			arr[i] = arr[i-1] * num;
			cout << arr[i] << endl;
		}
	}
	return *arr;
}

int myarr2(int** arr, int sizem, int sizen)
{
	for (int i = 0; i < sizem; i++)
	{
		for (int k = 0; k < sizen; k++)
		{
			arr[i][k] = rand() % 30;
			cout << arr[i][k] << " ";
		}
		cout << endl;
	}
	
	return **arr;
}


int main()
{
	cout << "TASK #1" << endl;
	int* ptrArr;
	int n;
	cout << " Please enter size of you array - ";
	cin >> n;

	if (n > 0)
	{
		ptrArr = new (std::nothrow) int[n];
		if (ptrArr != nullptr)
		{
			myarr1(ptrArr, n);
		}
		else
		{
			cout << "error sorry but memory can't be allocated";
		}
		delete[] ptrArr;
	}
	
	cout << "TASK #2" << endl;

	int** ptrARR2;
	const size_t m = 4;
	const size_t j = 4;

	ptrARR2 = new int* [m];
	for (size_t i = 0; i < m; i++)
	{
		ptrARR2[i] = new int[j];
	}

	myarr2(ptrARR2, m, j);

	delete[] ptrARR2;


	cout << "TASK #3" << endl;


	return 0;

}

