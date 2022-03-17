#include <iostream>
#include <cmath>
#include "Header.h"

int client_call()
{
	//БЛОК ВЫЧИЛЕНИЙ

	float F = 0; //главное значение функции

	int x = 0, y = 0; //переменные координат

	int i = 0; //сервисная переменная

	std::cout << "Enter x: ";
	std::cin >> x;

	std::cout << "Enter y: ";
	std::cin >> y;

	if (x > y)
	{
		i++;
		std::cout << "x bigger than y" << std::endl;
		F = function_X_y(x, y);
		std::cout << "F: " << F << std::endl;
	}

	if (x < y)
	{
		i++;
		std::cout << "x smaller than y" << std::endl;
		F = function_Y_x(x, y);
		std::cout << "F: " << F << std::endl;
	}

	if (x == y)
	{
		i++;
		std::cout << "x = y" << std::endl;
		F = function_xy(x, y);
		std::cout << "F: " << F << std::endl;
	}

	//БЛОК ПЕРЕЗАПУСКА

	if (i == 1)
	{
		int client_choise = 0; //Выводимые ниже данные послужат комментарием.
		std::cout << "Enter 1 to continue, any other nomber to stop: ";
		std::cin >> client_choise;
		if (client_choise == 1)
		{
			std::cout << std::endl << "loading..." << std::endl << std::endl;
		}
		else
		{
			std::cout << std::endl << "see you next time!" << std::endl;
		}
		return client_choise;
	}
	else
	{
		std::cout << "Something went wrong! The programm was emergency stopped! ";
		return 0;
	}
}