// My game

// lost fortune

#include<iostream>

#include<string>


using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	const int GOLD_PIECES =900;
	int adverturers, killed, survievers;
	string leader;

	cout <<"Welcome to Lost Fortune\n";
	cout << "For you own personal experince foolow the instuction\n";
	cout <<"Pleas enter a number";
	cin >> adverturers;
	cout << "\nPlease enter another number smaller than the first";
	cin >> killed;
	survievers = adverturers - killed;
	cout <<"\nPlease enter you last name";
	cin >> leader;
}

