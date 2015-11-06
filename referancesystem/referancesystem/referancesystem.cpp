// referincing system

#include<iostream>
#include<string>
#include<vector>

using namespace std;

string& refToElement(vector<string>& inventory , int i);


int main()
{
	vector<string> inventory;
	inventory.push_back("Sword");
	inventory.push_back("Sheild");
	inventory.push_back("Armour");

	//Displays string that returned referance refers to
	cout<<"Sending returned referacne to cout\n";
	cout<< refToElement(inventory,0);

	//Assigniing one referance to another --inexpensive assignment
	cout<<"\n\nAssing returnn referance to another referance\n";
	string& rStr = refToElement(inventory,1);
	cout<<"Sending new referance to cout\n";
	cout<< rStr<< endl;

	//Coping string object--expensive assigment
	cout<<"\n\nAssigning return referance to string object\n";
	string std = refToElement(inventory,2);
	cout<<"Sending new string object to cout\n";
	cout<< std<< endl;

	//Aletering the sring obeject throguht another referacne
	cout<<"\n\nAltering an object throguh a retunr referacne\n\n";
	rStr = "Healing Potion";
	cout<<"Sending altered object to cout\n";
	cout<< rStr<< endl;

	
	return 0;
}
string& refToElement(vector<string>& vec, int i)
{
	return vec[i];
}