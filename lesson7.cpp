/*
1. Создайте проект из 2х cpp файлов и заголовочного (main.cpp,
mylib.cpp, mylib.h) во втором модуле mylib объявить 3 функции:
для инициализации массива (типа float), печати его на экран и
подсчета количества отрицательных и положительных
элементов. Вызывайте эти 3-и функции из main для работы с
массивом.
2. Описать макрокоманду (через директиву define),
проверяющую, входит ли переданное ей число (введенное с
клавиатуры) в диапазон от нуля (включительно) до переданного
ей второго аргумента (исключительно) и возвращает true или
false, вывести на экран «true» или «false».
3. Задайте массив типа int. Пусть его размер задается через
директиву препроцессора #define. Инициализируйте его через
ввод с клавиатуры. Напишите для него свою функцию
сортировки (например Пузырьком). Реализуйте перестановку
элементов как макрокоманду SwapINT(a, b). Вызывайте ее из
цикла сортировки.
4. * Объявить структуру Сотрудник с различными полями.
Сделайте для нее побайтовое выравнивание с помощью
директивы pragma pack. Выделите динамически переменную
этого типа. Инициализируйте ее. Выведите ее на экран и ее
размер с помощью sizeof. Сохраните эту структуру в текстовый
файл.
5. * Сделайте задание 1 добавив свой неймспейс во втором
модуле (первое задание тогда можно не делать).
*/

#include <iostream>
using namespace std;
#define check(x,y) (x > 0 && x <y ? 1 : 0);
#define SIZE_M 7;
#include "mylib.h"


int main()
{
    cout << "TASK #1\n";
    cout << " your array will be created now";
    const int size = 5;
    float array[size];
    Arrayin(array, size);
    Arrayout(array, size);
    Arrayneg(array, size);

    cout << "\nTASK #2\n";
    int m;
    int n;
    cout << "\nplease enter your number you want to check";
    cin >> m;
    cout << "\nplease enter your number till which we will make check from 0\n";
    cin >> n;
    "\n";
    bool check = check(m, n);
    if (check)
        cout << "true";
    else 
        cout << "false";

    cout << "\nTASK #3\n";
    int array1[SIZE_M];
    for (i=0; i , SIZE_M; i++)
    return 0;
 }

