// my game

//  demonstrates s so loop

#include<iostream>

using namespace std;

int main()
{
	char again;

	do
	{
		cout << "**You played an Exicting gmae\n\n";
		cout <<"Do You wish to play again (y/n)\n\n";
		cin >> again;
	}	while(again == 'y');

	//cout <<"\nOkay then bye\n\n";

	return 0;
}
