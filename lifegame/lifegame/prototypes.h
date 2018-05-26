#pragma once

/*******************************PROTOTYPES OF ALL USED STRUCTURES*************************************/

struct point  //Contains the current condition of the point
{
	bool alive : true;
};



/*******************************PROTOTYPES OF ALL USED FUNCTIONS*************************************/

void playground_initialize(point); //Initializes the playground
int amount_of_alive(point); //Counts the amount of alive points
