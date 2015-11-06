// my game plan

// my score plan

#include<iostream>
//#include <string>


using std::cout;
using std:: cin;
using std:: endl;
using std::string;
int main()
{
	int scoreOne, scoreTwo, scoreThree;
	double averagenum;
	string average;
	cout <<" Enter a Number\n";
	cin >> scoreOne;
	cout <<"Enter a secon number\n";
	cin >> scoreTwo;
	cout <<"Enter a third and last number\n";
	cin >> scoreThree;
	averagenum = (scoreOne + scoreThree + scoreThree) / 3;
	cout << " tThe average number you choose was " << averagenum << " "  ;
	
	return 0;
}