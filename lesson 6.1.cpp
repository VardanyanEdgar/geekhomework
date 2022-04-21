#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	cout << "lesson6 task #3";
	ofstream fout1; //создание объекта №1
	cout << "first file is created. please enter the name of the file #1: ";
	string name1;
	cin >> name1;
	fout1.open(name1);
	if (!fout1.is_open())
	{
		cout << "error of open new file1";
	}

	fout1 << "these just a text for a first file to be written and it is doesn't mean that this text is usufual. Just an example.";

	fout1.close();

	ofstream fout2; //создание объекта №2
	cout << "second file is created. please enter the name of the file #2: ";
	string name2;
	cin >> name2;
	fout2.open(name2);
	if (!fout2.is_open())
	{
		cout << "error of open new file2";
	}

	fout2 << "these just a text for a second file to be written and it is doesn't mean that this text is usufual. Just an example.";

	fout2.close();


	cout << "lesson6 task #4 " << endl; //склеить два файла
	
		ofstream fout3;
		cout << "third file is created. please enter the name of the file #3 summary of 1 and 2: ";
		string name3;
		cin >> name3;
		fout3.open(name3, ios::app);
		if (fout3.is_open())
		{
			ifstream fin1(name1);
			string str;
			while (!fin1.eof())
			{
				str = "";
				getline(fin1, str);
				fout3 << str << endl;
			}

			fin1.close();

			ifstream fin2(name2);
				while (!fin2.eof())
				{
					str = "";
					getline(fin2, str);
					fout3 << str << endl;
				}
				fin2.close();
		}
		else
		{
			cout << "file #3 is not opened" << endl;
		}

		fout3.close();
		cout << "lesson6 task #5" << endl; //поиск слова в файле

		ifstream fin3(name3);
		cout << "we need to find in 3 file any word you will enter, so let's check" << endl; 
		if (fin3.is_open())
		{
			string buf;
			string word;
			cout << "so please enter the word you want to check in file #3" << endl;
			cin >> word;
			if (buf.find(word) != string::npos)
			{
				cout << "we find word CREATED";
			}
			else
			{
				cout << "we don't find such word as created";
			}
		}
	return 0;
}
