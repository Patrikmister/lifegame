#include "stdafx.h"
#include "prototypes.h"

int amount_of_alive(point playground[_HEIGHT_][_WIDTH_])
{
	int count = 0;
	
	for (int i = 0; i < _WIDTH_; i++)
		for (int j = 0; j < _HEIGHT_; j++)
		{
			if (playground[i][j].alive)
				count++;
		}
	return count;
}