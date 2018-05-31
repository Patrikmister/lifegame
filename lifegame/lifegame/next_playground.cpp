#include "stdafx.h"
#include "prototypes.h"

void next_playground(point new_playground[_WIDTH_][_HEIGHT_], point previous_playground[_WIDTH_][_HEIGHT_])
{
	int alive_neighbours;
	point pg;

	for (int i = 0; i < _WIDTH_; i++)
		for (int j = 0; j < _HEIGHT_; j++)
		{
			pg = previous_playground[i][j];
			alive_neighbours = amount_of_alive_neighbours(previous_playground, i, j);
		}
}