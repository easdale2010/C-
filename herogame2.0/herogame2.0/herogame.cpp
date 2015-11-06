// hero game2.0

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	vector<string> inventory;
	inventory.push_back("wsword");
	inventory.push_back("armour");
	inventory.push_back("shield");

	vector<string>:: iterator myiterator;
	vector<string>:: const_iterator iter;

	cout<<"You have " << inventory.size() <<" items/n";


	cout<<"Your items\n";
	for(iter = inventory.begin();iter != inventory.end();++ iter)
	{
		cout<< *iter << endl;
	}

	cout<<"\nYou swap your sword for a battle axe\n";
	myiterator = inventory.begin();
	*myiterator = "Battle Axe";

	cout<<"\nYour items\n";
	for(iter = inventory.begin(); iter != inventory.end();iter ++)
	{
		cout<< *iter << endl;
	}

	cout<<"\n\nThe item named "<< *myiterator << " has ";
	cout<< (*myiterator).size() << " letters";

	cout<<"\n\nThe items named "<< *myiterator<< " has ";
	cout<< myiterator->size() << " letters";

	cout<<"\n\nYou pick up a weapon from a fallen victim\n";
	inventory.insert(inventory.begin(), "crossbow");

	cout<<"You items\n";for(iter = inventory.begin(); iter != inventory.end();iter++)
		cout<< *iter<<endl;

	cout<<"Your armour is destroyed in fierce battle\n";
	inventory.erase(inventory.begin() +2);
	for(iter = inventory.begin();iter != inventory.end();iter ++)
		cout<<*iter << endl;d

	return 0;

}