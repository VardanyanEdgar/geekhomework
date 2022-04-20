/*
1. Выделить в памяти динамический одномерный массив
типа int.Размер массива запросить у пользователя.
Инициализировать его числами степенями двойки : 1, 2, 4,
8, 16, 32, 64, 128 … Вывести массив на экран.Не забыть
освободить память. = ) Разбить программу на функции.

2. Динамически выделить матрицу 4х4 типа int.
Инициализировать ее псевдослучайными числами через
функцию rand. Вывести на экран. Разбейте вашу
программу на функции которые вызываются из main.
3. Написать программу, которая создаст два текстовых
файла (*.txt), примерно по 50-100 символов в каждом
(особого значения не имеет с каким именно содержимым).
Имена файлов запросить у польлзователя.
4. * Написать функцию, «склеивающую» эти файлы в
третий текстовый файл (имя файлов спросить у
пользователя).
5. * Написать программу, которая проверяет присутствует
ли указанное пользователем при запуске программы слово
в указанном пользователем файле (для простоты
работаем только с латиницей). Используем функцию find
которая есть в строках std::string.
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

