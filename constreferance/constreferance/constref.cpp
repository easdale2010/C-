// shows constant refenrances

#include<iostream>
#include<string>
#include<vector>

using namespace std;

void display(const vector<string>& inventory);

int main()
{
	vector<string> inventory;
	inventory.push_back("Sword");
	inventory.push_back("Sheild");
	inventory.push_back("Armour");

	display(inventory);
}
void display(const vector<string> & inventory)
{
	for(vector<string>:: const_iterator iter = inventory.begin(); iter != inventory.end();++iter)
	{
		cout<<*iter << endl;
	}
}