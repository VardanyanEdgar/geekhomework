//2. Создать перечисление (enum) с возможными вариантами символов для игры в крестики-нолики
//3. Создать массив, способный содержать значения такого перечисления и инициализировать его.
// 4. * Создать структуру(struct) данных «Поле для игры в крестики - нолики» и снабдить его всеми 
//необходимыми свойствами(подумайте что может понадобиться).

#include <iostream>
#include <string>

enum Tictactoe { X, O, Empty};

struct Player {
	std::string name;
	unsigned short age;
	bool beginner;
	int winstreak;

};

int main()
{
	std::cout << "Welcome to Tictactoe, lets start" << std::endl;
	
	Player First{};

	std::cout << "Player One enter your Name " << First.name;
	std::cin >> First.name;
	std::cout << "Player One enter your Age " << First.age;
	std::cin >> First.age;

	std::cout << "Player one are you a beginner? Press 1 if Yes, press 0 if No " << First.beginner;
	std::cin >> First.beginner;
	std::cout << "Enter your winstreak " << First.winstreak;
	std::cin >> First.winstreak, "\n";

	Player Second{};
	std::cout << "Player Two enter your Name " << Second.name;
	std::cin >> Second.name;
	std::cout << "Player Two enter your Age " << Second.age;
	std::cin >> Second.age;
	std::cout << "Player Two are you a beginner? Press 1 if Yes, press 0 if No" << Second.beginner;
	std::cin >> Second.beginner;
	std::cout << "Player Two enter your winstreak " << Second.winstreak;
	std::cin >> Second.winstreak;


	Tictactoe game[3][3];
	game[2][2] = X;
	game[1][1] = O;
	game[1][3] = X;
	game[1][2] = O;
	game[2][1] = X;
	game[2][3] = O;
	game[3][1] = X;
	game[3][2] = O;
	game[3][3] = X;
			
	std::cout << game[2][2] << game[1][1] << game[1][3] << game[1][2] << game[2][1] << game[2][3] << game[3][1] << game[3][2] << game[3][3] << std::endl;
	return 0; 
}