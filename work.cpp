#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main()
{

	int Map[10][10] = {
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 0, 1, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 1, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 1, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 1, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 1, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 1, 9, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
	};

	int PlayerX = 1;
	int PlayerY = 1;
	int MonsterX = 5;
	int MonsterY = 5;
	int MonsterMoveX = 0;
	int MonsterMoveY = 0;
	// GameLoop
	// Frame
	for (;;)
	{
		// Render
		for (int Y = 0; Y < 10; ++Y)
		{
			for (int X = 0; X < 10; ++X)
			{
				if (PlayerX == X && PlayerY == Y) //&& = and, || = or
				{
					std::cout << "P";
					
				}
				else if (MonsterX == X && MonsterY == Y)
				{
					std::cout << "M";
				}
				else if (Map[Y][X] == 1)
				{
					cout << "#";
				}
				else if (Map[Y][X] == 0)
				{
					cout << " ";
				}
				else if (Map[Y][X] == 9)
				{
					cout << "@";
				}
			}
			cout << endl;
		}

		// Input
		int Input;
		Input = _getch();
		// process
		

		if (Input == 'd' && Map[PlayerY][PlayerX + 1] != 1)
			PlayerX++;

		if (Input == 'a' && Map[PlayerY][PlayerX - 1] != 1)
			PlayerX--;

		if (Input == 'w' && Map[PlayerY - 1][PlayerX] != 1)
			PlayerY--;

		if (Input == 's' && Map[PlayerY + 1][PlayerX] != 1)
			PlayerY++;
		
		




		if (Map[PlayerY][PlayerX] == 9)
		{
			system("cls");
			cout << "°ñÀÎ" << endl;

			return 0;
		}
		else
		{
			system("cls");
		}
	}




	return 0;
}