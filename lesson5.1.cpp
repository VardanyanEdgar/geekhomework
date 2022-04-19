/*
1. Написать функцию которая выводит массив double чисел на экран. 
Параметры функции это сам массив и его размер. Вызвать эту функцию

2 Задать целочисленный массив, состоящий из элементов 0 и 1. 
Например: [ 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 ]. Написать функцию, 
заменяющую в принятом массиве 0 на 1, 1 на 0. Выводить на экран 
массив до изменений и после.
*/

#include <iostream>
using namespace std;

	/*double myarr(double* arr, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << ", ";
	}
	return *arr;
}
	*/

	int myarr2(int* arr2, int size)
{
	//cout << "here is going new arr" << endl;

	for (size_t i = 0; i < size; i++)
	{
		if (arr2[i] == 0)
		{
			cout << arr2[i] + 1 << " ";
		}
		else
		{
			cout << arr2[i] - 1 << " ";
		}
	}
	return *arr2;
}

	int myarr3(int* arr3, int size)
	{
		for (size_t i = 0; i < size; i++)
		{
			if (i == 0)
			{
				arr3[i] = 1;
				cout << arr3[i] << " ";
			}
			else
			{
				arr3[i] = arr3[i - 1] + 3;
				cout << arr3[i] << " ";
			}
		}

		return *arr3;
	}

int main()
{
	/*cout << "TASK #1" << endl;

	int size1 = 7;
	cout << "some  array inserted and it is " << endl;
	
	double arr[] = { 5.21, 42.87, 17.2, 36.67, 8.21243, 55.2341, 812.098234 };
	cout << myarr(arr, size1) << endl;*/

	cout << "\nTASK #2" << endl;
	int const SIZE = 9;
	int arr2[SIZE] = { 1, 1, 1, 1, 1, 1, 1, 1, 0};

	cout << "current arr2 looks like: " << endl;

	for (size_t i = 0; i < SIZE; i++)
	{
		cout << arr2[i] << " ";
 	}
	
	cout << "\n new arr2 will be: " <<  endl;
	myarr2(arr2, SIZE);

	/*Задать пустой целочисленный массив размером 8. 
	Написать функцию, которая с помощью цикла заполнит 
	его значениями 1 4 7 10 13 16 19 22. Вывести массив на экран.*/

	cout << "\nTASK #3" << endl;
	cout << " new clear array for task #3 was initialized " << endl;
	const int size_3 = 8;
	int arr3[size_3] = {0, 0, 0, 0, 0, 0, 0, 0};
	cout << "array full of zero numbers is " << endl;
	for (size_t i = 0; i < size_3; i++)
	{
		cout << arr3[i] << " ";
	}
	cout << "\ninserted with number from 1 till 22 " << endl;
	myarr3(arr3, size_3);

	return 0;
}