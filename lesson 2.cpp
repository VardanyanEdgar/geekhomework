#include <iostream>

int main()
{
	//1. ������� � ���������������� ���������� ���������� ����� ������(short int, int, long long, char, bool, float, double).
	short int a = -3;
	int b = 5;
	long long int c = 129;
	char A = 'a';
	bool length = true;
	float B = 2124213.23f;
	double C = 627.87;

	std::cout << a << " " << b << " " << c << " " << A << " " << length << " " << B << " " << C << std::endl;
	
	return 0;

	//2. ������� ������������ (enum) � ���������� ���������� �������� ��� ���� � ��������-������

	//3. ������� ������, ��������� ��������� �������� ������ ������������ � ���������������� ���.

	// 4. * ������� ���������(struct) ������ ����� ��� ���� � �������� - ������ � �������� ��� ����� 
	//������������ ����������(��������� ��� ����� ������������).
	//5. * *������� ���������(struct MyVariant) ������������: union MyData(int, float, char) � 3 - � 
	//������� ����(�����) ������������ ������ ���� �������� � ������ ������ ���������� � �����������
	//(isInt, isFloat, isChar).������������������ ������ ������������� � ���� ���� ���������.
}