/* 1. Создать класс Power, который содержит два вещественных числа.
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

/*public:
 void setnum(int a, int b)
 {
     p_a = a;
     p_b = b;
 }

 void calculate()
 {
    int c = pow(p_a,p_b);
    std::cout << c << std::endl;
 }*/

class Stack 
{
private:
    const int SIZE = 10;
    int array[10] = { 1, 4, 6, 7, 6, 8, 31, 54, 64, 43 };

public:
    void reset()
    {
        std::cout << "sizeof" << sizeof array << std::endl;
        int i;
        for (i = 0; i < 10; i++)
        {
            array[i] = 0;
            std::cout << "array[i] is " << array[i] << std::endl;
            array[i] = array[i + 1];
            std::cout << "array[i] which cleared " << array[i] << std::endl;
            std::cout << "array[i+1] which cleared " << array[i + 1] << std::endl;
        };
        std::cout << "sizeof" << sizeof array << std::endl;

    };
};

    int main() 
    {
        Stack first;
        first.reset();
        return 0;
        
    }



    /*int main()
    {
        Stack stack;
        stack.reset();
        stack.print();

        stack.push(3);
        stack.push(7);
        stack.push(5);
        stack.print();

        stack.pop();
        stack.print();

        stack.pop();
        stack.pop();
        stack.print();

        return 0;
    }
}*/