/*
1. Написать программу, вычисляющую выражение a* (b + (c / d)) и выводящую результат с
плавающей точкой, где a, b, c, d – целочисленные константы.
Используйте static_cast или С - Style cast к float чтобы выполнить точное деление.

2.Дано целое число.Если оно меньше или равно 21, то выведите на экран разницу между
этим числом и числом 21. Если же заданное число больше, чем 21, необходимо вывести
удвоенную разницу между этим числом и 21. При выполнении задания следует использовать
тернарный оператор(? : ).

3* Описать трёхмерный целочисленный массив, размером 3х3х3 и указатель на значения внутри
массива и при помощи операции разыменования вывести на экран значение центральной ячейки
получившегося куба[1][1][1].

4** Написать программу, вычисляющую выражение из первого задания, а переменные для неё объявлены
и инициализировать в другом cpp файле. Используйте extern.
*/

#include <iostream>

int main()
{
	//№1
	const int a = 9;
	const int b = 124;
	const int c = 15;
	const int d = 2;
	float calc = a * (b + (static_cast <float>(c) / d)); // Вопрос: только получается на делении надо приводить тип, на умножение нормально работает? не до конца здесь понял.
	std::cout << "#1 calc is " << calc << std::endl;

	// 2

	int f = 15;
	int g = 29;

	f = (f <= 21) ? f-21 : (f-21)*2;
	std::cout << "#2 new f is " << f << std::endl;
	

	// 3

	int arr[3][3][3] = {

	{24, 54, 84},
	{4, -23, 243},
	{2134, 435214, 213},

	{10, 4, 108},
	{ 41, 1, -18 },
	{12, 841, 7413},
	
	{-24, -54, -84},
	{ 2413, 541, 1 },
	{ 74, 32, 5 },
		
	};
	
	ptr = nullptr;
	ptr = & arr [1][1][1];
	* ptr = 11
	std::cout << arr [1][1][1] << std::endl;
	return 0;
}
