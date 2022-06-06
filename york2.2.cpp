/*2. Создать классы Apple(яблоко) и Banana(банан), которые наследуют класс Fruit(фрукт).
У Fruit есть две переменные - члена: name(имя) и color(цвет).
Добавить новый класс GrannySmith, который наследует класс Apple.
Код, приведенный выше, должен давать следующий результат:

My apple is red.
My banana is yellow.
My Granny Smith apple is green.
*/

#include <iostream>
#include <string>

class Fruit
{

public:
	std::string Fname;
	std::string Fcollor;

	Fruit(std::string name = "", std::string color = "") : Fname(name), Fcollor(color)
	{
	}

	void setname(std::string name)
	{
		this->Fname = name;
	}

	void setColor(std::string color)
	{
		this->Fcollor = color;
	}


	std::string getName() const { return Fname; }
	std::string getColor() const { return Fcollor; }
};

class Apple : public Fruit
{
public:
	

};

class Banana : public Fruit
{

};

class GrannySmith : virtual public Apple
{

};


int main()
{
	Apple a;
	Banana b;
	GrannySmith c;

	a.setname("aplle");
	a.setColor("red");
	b.setname("Banana");
	b.setColor("yelow");
	c.setname("Granny Smith apple");
	c.setColor("green");


	std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
	std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";
	return 0;
}