// MY die game

// demostrates use of random numbers

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int randomNumber = rand();
	int die =(randomNumber %6) + 1;

	cout<<"Well done you rolled a " << die <<endl;/*
	cout <<"\n\n max rand = " << RAND_MAX << endl;
*/
	return 0;
}