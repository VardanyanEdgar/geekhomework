/*3. Написать класс, который реализует функциональность стека. Класс Stack должен иметь:
• private-массив целых чисел длиной 10;

• private целочисленное значение для отслеживания длины стека;

• public-метод с именем reset(), который будет сбрасывать длину и все значения элементов на 0;

• public-метод с именем push(), который будет добавлять значение в стек. push() должен 
возвращать значение false, если массив уже заполнен, и true в противном случае;

• public-метод с именем pop() для вытягивания и возврата значения из стека. Если в 
стеке нет значений, то должно выводиться предупреждение;

• public-метод с именем print(), который будет выводить все значения стека.*/

#include <iostream>
#include <cmath>

class Stack 
{
private:
    //const int size;
    int size;
    int m_array[10] = {1, 5, 4, 5, 8, 10, 43, 32, 9, 72}; //когда ставлю m_array[size] ошибку даёт

public:
    void reset()
    {
        int i;
        for (i = 0; i < size; i++)
        {
            m_array[i] = 0;
        }

        size = 0;
        
        //void setsizeNULL() 
        //{
        //size = 0;
        //}
            
     }

    void setsizenew ()
    {
        size++;
    }

    void push(const int value)
    {
        m_array[size] = value;
        setsizenew(); 
        if (m_array[size] == NULL)
        {
            std::cout << "false" << std::endl;
        }
        else 
        { 
            std::cout << "true" << std::endl; 
        }
      
     }

   void pop()
    {
        for (int i = 0; i < size;)
        {
            if (m_array[i] == NULL)
            {
                std::cout << "warning!" << std::endl;
            }
            else
            {
                std::cout << m_array[i];
                i++;
            };   
        }
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << m_array[i] << std::endl;
        }
    }
};
  
int main()
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