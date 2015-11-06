// y Game

// My project

#include<iostream>

using namespace std;

int main()
{
	const int ALIEN_POINTS = 150;
	int alineskilled = 10;
	int score = alineskilled * ALIEN_POINTS;
	cout << "Score; "<< score << endl;

	enum difficulty {novice, easy, hard, unbeatable};
	difficulty mydifficulty = easy;

	enum shipCost {FIGHTERCOST = 25, BOMBERCOST, CRUISERCOST = 50};
	shipCost myshipcost = BOMBERCOST;

	cout <<"Total cost to upgrade ship = " << (CRUISERCOST - myshipcost) 
		<< "   Reassearch Points \n";

	return 0;
}