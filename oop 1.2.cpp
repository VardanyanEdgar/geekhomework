/*
* 2. Написать класс с именем RGBA, который содержит 4 переменные-члена типа
std::uint8_t: m_red, m_green, m_blue и m_alpha (#include cstdint для доступа к этому типу).
Задать 0 в качестве значения по умолчанию для m_red, m_green, m_blue и 255 для m_alpha.
Создать конструктор со списком инициализации членов, который позволит пользователю
передавать значения для m_red, m_blue, m_green и m_alpha. Написать функцию print(),
которая будет выводить значения переменных-членов.
*/

#include <iostream>
#include <cstdint>

class RGBA {
private:
    std::uint8_t m_red = 0;
    std::uint8_t m_green = 0;
    std::uint8_t m_blue = 0;
    std::uint8_t m_alpha = 256;

public:
    RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha)
        : m_red(red), m_green(green), m_blue(blue), m_alpha(alpha)
    {

    }

    void print()
    {
        std::cout << "m_red: " << m_red << "m_green: " << m_green << "m_blue: " << m_blue << "m_alpha: " << m_alpha;
    }

};

/*Date(int day, int month, char* dayOfWeek = "mon")
    : m_day(day), m_month(month), m_dayOfWeek(dayOfWeek) // напрямую
    инициализируем переменные - члены класса*/

int main()
{
    int red, green, blue, alpha;
    std::cout << "please insert number for red" << std::endl;
    std::cin >> red;
    std::cout << "please insert number for green" << std::endl;
    std::cin >> green;
    std::cout << "please insert number for blue" << std::endl;
    std::cin >> blue;
    std::cout << "please insert number for alpha" << std::endl;
    std::cin >> alpha;
    RGBA First(red, green, blue, alpha);
    First.print();
    return 0;
}