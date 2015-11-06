// My project

// Hero game

#include<iostream>
#include<string>

using namespace std;

int main()
{
	const int MAX_ITEMS = 10;
	string inventory[MAX_ITEMS];
	int numItems = 0;
	inventory[numItems++] = "sword";
	inventory[numItems++] = "sheild";
	inventory[numItems++]  = "armour";

	cout<<"You items\n";
	for(int i=0;i<numItems;i++)
	cout<<inventory[i]<< endl;

	cout<<"\n\nYou swap a sword for a battle axe";
	inventory[0] = "Battle Axe";

	cout<<"\nYou items\n";
	for(int i=0;i<numItems;i++)
		cout<<inventory[i]<< endl;

	cout<<"The item name "<< inventory[0];
	cout<<"\nHas "<< inventory[0].size()<<" leterrs\n\n";

	cout<<"You pick up a ahealing position";
	if(numItems < MAX_ITEMS)
	{
		inventory[numItems++] = "Healing Position";
	}
	else
	{
		cout<<"You are carrying to much and cnat carry another item";
	}

	cout<<"\nYou items\n";
	for(int i=0;i<numItems;i++)
		cout<<inventory[i]<<endl;

	return 0;
}