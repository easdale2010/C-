// My Game

// my case switch

#include<iostream>

using namespace std;

int main()
{
	char again = 'y';

	while(again == 'y')
	{
	cout <<"\nYou played an exiciting game\n\n";
	cout <<"Do you wish to play again (y/n)";
	cin >> again;
	}

	cout <<"\n\nOk then bye\n\n";
	return 0;
}