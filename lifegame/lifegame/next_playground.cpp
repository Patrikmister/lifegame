#include "stdafx.h"
#include "prototypes.h"

void next_playground(point new_playground[_WIDTH_][_HEIGHT_], point previous_playground[_WIDTH_][_HEIGHT_])
{
	int alive_neighbours;
	int i = 0, j = 0;
	point pg;

	for (int i = 0; i < _WIDTH_; i++)
		for (int j = 0; j < _HEIGHT_; j++)
		{
			pg = previous_playground[i][j];
			alive_neighbours = amount_of_alive_neighbours(previous_playground, i, j);

			if (pg.alive)
			{
				if (alive_neighbours == 3)
					new_playground[i][j].alive = true;
			}
			else
			{
				if (alive_neighbours < 2 || alive_neighbours>3)
					new_playground[i][j].alive = false;
			}
		}
}