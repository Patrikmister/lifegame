#include "stdafx.h"
#include "prototypes.h"

void playground_initialize(point playground[_WIDTH_][_HEIGHT_]) //Fills the playground randomly
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(1, 400);

	for (int i = 0; i < _WIDTH_; i++)
		for (int j = 0; j < _HEIGHT_; j++)
		{
			unsigned int num = dis(gen);

			if (num % 2 == 0) 
				playground[i][j].alive = true;
			else 
				playground[i][j].alive = false;
		}
}