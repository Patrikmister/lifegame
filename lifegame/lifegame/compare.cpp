#include "stdafx.h"
#include "prototypes.h"

bool compare(point first[_WIDTH_][_HEIGHT_], point second[_WIDTH_][_HEIGHT_])
{
	for (int i = 0; i < _WIDTH_; i++)
		for (int j = 0; j < _HEIGHT_; j++)
			if (first[i][j].alive != second[i][j].alive)
				return false;
	return true;
}