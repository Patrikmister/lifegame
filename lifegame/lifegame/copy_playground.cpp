#include "stdafx.h"
#include "prototypes.h"

void copy_playground(point original[_WIDTH_][_HEIGHT_], point copy[_WIDTH_][_HEIGHT_])
{
	for (int i = 0; i < _WIDTH_; i++)
		for (int j = 0; j < _HEIGHT_; j++)
			copy[i][j] = original[i][j];
}