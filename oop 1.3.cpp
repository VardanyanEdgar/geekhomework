/* private-массив целых чисел длиной 10;

• private целочисленное значение для отслеживания длины стека;
• public-метод с именем reset(), который будет сбрасывать длину и все значения элементов на 0;
• public-метод с именем push(), который будет добавлять значение в стек.
push() должен возвращать значение false, если массив уже заполнен, и true в противном случае;
• public-метод с именем pop() для вытягивания и возврата значения из стека.
Если в стеке нет значений, то должно выводиться предупреждение;
• public-метод с именем print(), который будет выводить все значения стека.*/


#include <iostream>
#include <cstdint>

class Stack
{
private:
    static const int Size = 10;
    int arr[Size] = { 1, 5, 3, 6, 7, 8,  9, 12, 16, 45 };


public:

    void reset()
    {
        for (int i = 0; i < Size-1; i++)
        {
            arr[i] = 0;
            std::cout << "arr I first is" << arr[i] << std::endl;
            arr[i] = arr[i + 1];
            std::cout << "arr I+1 now " << arr[i+1] << std::endl;
        };
    };

    void print() {
        for (int i = 0; i < Size; i++)
        {
            std::cout << "arr new now is " << arr[i] << std::endl;
            std::cout << "sise " << Size << std::endl;
        }
    };
};

        int main()
        {
            Stack stack;
            stack.reset();
            stack.print();

            //stack.push(3);
           // stack.push(7);
           // stack.push(5);
           // stack.print();

           // stack.pop();
           // stack.print();

            //stack.pop();
           // stack.pop();
            //stack.print();

            return 0;
        }