//health game
#include<iostream>
#include<string>

int radiation(int health);

using namespace std;

int main()
{
	int health = 80;
	cout<<"Your health is "<< health <<"\n\n";

	health =radiation (health);
	cout<<"Your health after exposion to radiation is "<< health <<"\n\n";

	health = radiation(health);
	cout<<"Your health ater exposure to radition is "<< health <<"\n\n";

	health = radiation(health);
	cout<<"Your health after expoosure to radiation is "<< health <<"\n\n";

	return 0;

}

	inline int radiation(int health)
	{
		return (health /2);
	}