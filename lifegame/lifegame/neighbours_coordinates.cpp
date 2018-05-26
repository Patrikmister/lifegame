#include "stdafx.h"

void neighbours_coordinates(int neighbours[][2], int x, int y)
{
	int k = 0;

	for (int i = x - 1; i <= x + 1; i++)
	{
		for (int j = y - 1; j <= y + 1; j++)
		{
			if (i == x&&j == y)
				continue;
			neighbours[k][0] = i;
			neighbours[k][1] = j;
			k++;
		}
	}
}