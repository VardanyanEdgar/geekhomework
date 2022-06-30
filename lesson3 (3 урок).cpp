/*Написать функцию, добавляющую в конец списка вещественных чисел
элемент, значение которого равно среднему арифметическому всех его
элементов.

2. Создать класс, представляющий матрицу. Реализовать в нем метод,
вычисляющий https://ru.wikipedia.org/wiki/%D0%9E%D0%BF%D1%80%D0%B5%D0%B4%D0%B5%D0%BB%D0%B8%D1%82%D0%B5%D0%BB%D1%8C
матрицы. Для реализации используйте
контейнеры из STL.

3. Реализовать собственный класс итератора, с помощью которого можно будет
проитерироваться по диапазону целых чисел в цикле for-range-based.
*/


#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <list>
using namespace std;

void show_vector(vector<int>& a)
{
	for (vector<int>::iterator it = a.begin(); it < a.end(); ++it)
		cout << *it << " ";
}

int average(vector<int>& vec)
{
	int sum = 0;
	for (auto n : vec)
	{
		sum += n;
	}

	int average = sum / static_cast <int> (vec.size());
	cout << "average num is " << average << endl;
	return average;


}

class Matrix
{
public:

	vector<vector <int>> m;

	Matrix(int rows, int col)
	{
		vector<vector <int>> v(col, vector<int>(rows)); //это в принципе лишнее можно и через matrix всё делать
		m = v;

		/* вопрос - получается для двумерных векторов нельзя так пробежаться по элементам?? или что-то не так делаю
		for (auto elem : m)
		{
			elem = rand()% 30;
		}*/

		for (int i = 0; i < rows; i++)
		{

			for (int j = 0; j < col; j++)
			{
				cout << "insert for [i]  = " << i << "[j] = " << j << " any number " << endl;
				cin >> v[i][j];
				cout << " ";
			}
			cout << endl;
		}

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cout << v[i][j] << " ";
			}
			cout << endl;
		}
	}

	void del(int rows, int col)
	{
		if (rows = 2 && col == 2)
		{
			int del = m[0][0] * m[1][1] - m[0][1] * m[1][0];
			cout << "for 2*2 determinant is  " << del << endl;
		}
		else if (rows = 3 && col == 3)
		{
			int del = m[0][0] * m[1][1] * m[2][2] - m[0][0] * m[1][2] * m[2][2] - m[0][1] * m[1][0] * m[2][2] + m[0][1] * m[1][2] * m[2][0] + m[0][2] * m[1][0] * m[2][1] + m[2][0] - m[1][2] * m[1][1] * m[2][0];
			cout << "for 3*3 determinant is " << del << endl;
		}
		else
		{
			cout << "please try again and choose 2*2 or 3*3 matrix" << endl;

			//не разобрался с формулой, как описать m*n размер матрицы.. в видео у вас было, буду изучать потом.
		}
	}
};



class Iterator
{
	vector <int> mV;
    int* mBegin;
	int* mEnd;

public:
	Iterator(vector <int>& vec) : mV(vec)  // не понял эту запись, в вектор типа ещё раз передаём вектор?

	{
		mBegin = mV.empty() ? nullptr : &mV.front();
		mEnd = mBegin + mV.size();

		int* begin()
		{
			return mBegin;
		};

		int* end()
		{
			return mEnd;
		}

		bool operator !=(int* b)
		{
			return mBegin != b;
		}

		atour operator ++ () -> int*
		{
			return ++mBegin;
		}

		atour operator * ()
		{
			return *mBegin;
		}
	};

	void rangeb(vector <int> v)
	{
		for (auto elem : v)
		{
			elem = rand() % 50;
			cout << elem << " ";
		}
		cout << endl;
	}

	void rangeb(deque<int> v)
	{
		for (auto elem : v)
		{
			elem = rand() % 50;
			cout << elem << " ";
		}
		cout << endl;
	}

	void rangeb(list<int> v)
	{
		for (auto elem : v)
		{
			elem = rand() % 50;
			cout << elem << " ";
		}
		cout << endl;
	}

};


int main()
{
	setlocale(LC_ALL, "ru");

	cout << "Задание #1" << endl;

	int n;
	cout << "please insert number of element of vector" << endl;
	cin >> n;
	int value = 0;
	srand(time(NULL));

	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		value = rand() % n;
		v.push_back(value);

	}

	cout << "vector consist of these numbers: ";
	show_vector(v);
	cout << endl;
	int avnumber = average(v);
	cout << "now we will add avnumber to vector" << endl;

	v.push_back(avnumber);

	cout << "New vector consist of these numbers: ";
	show_vector(v);
	cout << endl;

	cout << "Задание #2" << endl; // я тут думал, что надо перегружать функции в классе, а потом посмотрел как вы сделали
								  // просто для себя прописал, также второй метод, как вы сделали, чтобы у меня сохранилось
	int c;
	int r;
	cout << "Please insert number of row" << endl;
	cin >> r;
	cout << "Please insert number of columns" << endl;
	cin >> c;

	Matrix First(c, r);
	First.del(c, r);

	cout << "Задание #3" << endl;
	vector <int> vr = { 2, 5, 6, 10, -1, 55 };
	deque<int> deq = { 3,6,7, 8, 9,6,4 };
	list <int> L = { 31,61,72, 82, 29, 26,24 };

	Iterator first;
	first.rangeb;
	Iterator second;
	Iterator third;
	Iterator fours(vr);
	


}