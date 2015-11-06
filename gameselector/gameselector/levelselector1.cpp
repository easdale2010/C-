// My game

//difficulty selector

#include<iostream>

using namespace std;

int main()
{
	cout <<"Select you difficulty\n\n";
	cout <<"1-Easy\n\n";
	cout <<"- Normal\n\n";
	cout <<"3- Hard\n\n";

	 int difficulty;
	 cout <<"Enetr you level\n";
	 cin >> difficulty;

	  switch (difficulty)
	  {
	  case 1:
		  cout <<"Not very tough are we\n\n";
		  break;

	  case 2:
			  cout <<"Hmm like a challenge\n\n";
			  break;
	  case 3:
			  cout <<"You are as hard as nail\n\n";
	  default:
			  cout <<"told you you options ya edjit\n\n";

			
	  }
	    return 0;
}