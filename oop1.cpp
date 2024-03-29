﻿/* 1. Создать класс Power, который содержит два вещественных числа. 
Этот класс должен иметь две переменные-члена для хранения этих 
вещественных чисел. Еще создать два метода: один с именем set, 
который позволит присваивать значения объявленным в классе переменным,
второй — calculate, который будет выводить результат возведения 
первого числа в степень второго числа. Задать значения этих двух 
чисел по умолчанию.

2. Написать класс с именем RGBA, который содержит 4 переменные-члена 
типа std::uint8_t: m_red, m_green, m_blue и m_alpha (#include cstdint 
для доступа к этому типу). Задать 0 в качестве значения по умолчанию 
для m_red, m_green, m_blue и 255 для m_alpha. Создать конструктор со 
списком инициализации членов, который позволит пользователю передавать 
значения для m_red, m_blue, m_green и m_alpha. Написать функцию print(), 
которая будет выводить значения переменных-членов.*/

#include <iostream>
#include <cmath>

class Power
{
private:
    int p_a;
    int p_b;

    public:
    void setnum(int a, int b)
    {
        p_a = a;
        p_b = b;
    }

    void calculate()
    {
       int c = pow(p_a,p_b);
       std::cout << c << std::endl;
    }
};

int main()
{
    std::cout << "TASK #1" << std::endl;
    Power num;
    num.setnum(3,3);
    num.calculate();
    return 0;
}
