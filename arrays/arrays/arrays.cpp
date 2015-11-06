//my project

// hero game

#include<iostream>
#include<string>

using namespace std;

int main()
{
	const int MAX_ITEMS = 10;
	string inventory [MAX_ITEMS];

	int numItems =0;
	inventory[numItems++] = " sword";
	inventory [numItems++] = "armour";
	inventory[numItems++] = "sheild";

	cout <<"You items\n";
	 for(int i=0;i<numItems;i++)
		 cout<< inventory[i]<<endl;

	 cout<<"\nYou switch you sword for a Battle Axe\n";
	 inventory[0] = "Battle Axe";
	 cout<<"\nYour itmes";
	 for(int i=0;i<numItems;i++)
		 cout<<inventory[i]<<endl;

	 cout<<"The item name "<< inventory[0]<< "Has ";
	 cout << inventory[0].size()<< "Letters in it";
		 

}