#include "stdafx.h"
#include "prototypes.h"

void print_playground(point playground[_WIDTH_][_HEIGHT_])
{
	system("cls");

	for (int i = 0; i < _WIDTH_; i++)
	{
		for (int j = 0; j < _HEIGHT_; j++)
		{
			if (playground[i][j].alive)
				cout << "*";
			else
				cout << " ";
			cout << " ";
		}
		cout << "\n";
	}
}