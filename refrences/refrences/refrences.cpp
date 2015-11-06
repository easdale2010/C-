// refrences

// uses refrences 

#include<iostream>

using namespace std;

int main()
{
	int myscore = 1000;
	int& mikescore = myscore;

	cout<<" My score  is " << myscore<<endl;
	cout<<"Mike score is "<< mikescore << endl;

	cout<<"\nAdding 500 to my score ";
	myscore += 500;
	cout<<"My socre is "<< myscore<< endl;
	cout<<"\nMike score is "<< mikescore<< endl;

	cout<<"\nAdding 500 to mikes score ";
	mikescore += 500;
	cout<<"\nMikes score is "<< mikescore << endl;
	cout<<"My socre is "<< myscore << endl;

	return 0;

}