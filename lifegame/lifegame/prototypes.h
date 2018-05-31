#pragma once

/*******************************PROTOTYPES OF ALL USED STRUCTURES*************************************/

struct point  //Contains the current condition of the point
{
	bool alive : true;
};



/*******************************PROTOTYPES OF ALL USED FUNCTIONS*************************************/

void playground_initialize(point); //Initializes the playground
int amount_of_alive(point); //Counts the amount of alive points
void neighbours_coordinates(int neighbours[][2], int x, int y); //Coordinates of neighbours
int amount_of_alive_neighbours(point playground[_WIDTH_][_HEIGHT_], int x, int y); //Counts the alive neighbours (in the square, 8 points)
void next_playground(point new_playground[_WIDTH_][_HEIGHT_], point previous_playground[_WIDTH_][_HEIGHT_]); //Changes the playground