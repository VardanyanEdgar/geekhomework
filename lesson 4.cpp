
#include <iostream>

int main()
{
    std::cout << " task #1" << std::endl;
    int a;
    int b;
    std::cout << "enter number 1 - ";
    std::cin >> a;
    std::cout << "enter number 2 - ";
    std::cin >> b;
    int c = a + b;
    if (c >= 10 && c <= 20)
    {
        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false" << std::endl;
    };

    std::cout << " task #2" << std::endl;
    int a1;
    int a2;
    std::cout << "enter any number" << std::endl;
    std::cin >> a1;
    std::cout << "enter one more number" << std::endl;
    std::cin >> a2;
    c = a1 + a2;
    if (c == 10 || (a1 == 10 && a2 == 10))
    {
        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false" << std::endl;
    }

    std::cout << " task #3" << std::endl;
    int number;

    for (number = 1; number < 50; number += 2)
    {
        std::cout << number << " ";
    };
     
    std::cout << " \n task #4" << std::endl;
    int num;
    std::cout << "enter you number for check ";
    std::cin >> num;
    int i;
    for (i = 2; i < num; i++)
    {       
        if (num % i == 0)
        {      
            break;
        }
    }
        
    if (i == num)
    {
        std::cout << "your number is prime number " << std::endl;
    }
    else 
    {
        std::cout << "your number is not prime number " << std::endl;
    }
    
    std::cout << " task #5" << std::endl;

    int year = 0;
   
    while (year > 3000 || year < 1)
    {
        std::cout << "please make choice between 1 till 3000" << std::endl;
        std::cin >> year;
    }

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        std::cout << "your chosen year is leap year" << std::endl;
    }
    else
    {
        std::cout << "your chosen year is not leap year" << std::endl;
    }

    return 0;
  }

    

