
#include "stdafx.h"
#include "prototypes.h"


int main()
{
	point playground[_WIDTH_][_HEIGHT_];
	point previous_playground[_WIDTH_][_HEIGHT_];

	playground_initialize(playground);
	int alive_points = -1;
	bool optimal = false;

	do
	{
		print_playground(playground);
		copy_playground(playground, previous_playground);
		next_playground(playground, previous_playground);

		optimal = compare(playground, previous_playground);
		alive_points = amount_of_alive(playground);

		if (optimal)
			cout << "Optimal configuration\n";

		if (alive_points == 0)
			cout << "They are all dead :(\n";
		Sleep(1000);
	} while (alive_points != 0 && !optimal);

	system("pause");

    return 0;
}

