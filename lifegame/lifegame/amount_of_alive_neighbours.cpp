#include "stdafx.h"
#include "prototypes.h"

int amount_of_alive_neighbours(point playground[_WIDTH_][_HEIGHT_], int x, int y)
{
	int count = 0;
	/*
	int neighbours[8][2];
	int _x, _y;

	neighbours_coordinates(neighbours, x, y);

	for (int i = 0; i < 8; i++)
	{
		_x = neighbours[i][0];
		_y = neighbours[i][1];

		if (_x < 0 || _y < 0)
			continue;
		if (_x >= _WIDTH_ || _y >= _HEIGHT_)
			continue;

		if ((playground)[_x][_y].alive)
			count++;
	}*/
	
	return count;
}








