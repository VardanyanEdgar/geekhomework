#include <iostream>
using namespace std;

float Arrayin(float* arr, int size)
{
	cout << "your array size is " << size << " please insert any numbers in quantity of " << size << endl;
	for (size_t i = 0; i < size; i++)
	{
		cin >> arr[i];
		"\n";
	}
	return *arr;
}

float Arrayout(float* arr, int size)
{
	cout << "\nhere is your entered array: ";
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << ", ";
	}
	return *arr;
}

float Arrayneg(float* arr, int size)
{
		int negatives = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			negatives++;
		}	
		else
		{
			continue;
		}
		
	}
	cout << "\nyou have entered " << negatives << " negatives numbers: ";
	return *arr;
}