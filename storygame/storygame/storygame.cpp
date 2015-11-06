// Mad Lib

// askes for user input to make a story

#include<iostream>
#include<string>

using namespace std;

string askText(string prompt);
int askNumber(string prompt);

void tellstory(string name,string noun, int number, string bodypart, string verb);

int main()
{
	cout<<"Welcome to Mad Lib\n\n";
	cout<<"Please anwere the following questions ";
	string name = askText("Please enter your name ");
	string noun = askText("Please enter a ploural noun ");
	int number = askNumber("Please enter a number ");
	string bodypart = askText("Please enter a bodypart ");
	string verb =("Please enter a verb ");

	tellstory(name,noun, number, bodypart, verb);

	return 0;
}

string askText(string prompt)
{
	string text;
	cout << prompt;
	cin >> text;
	return text;
}

int askNumber(string prompt)
{
	int num;
	cout << prompt;
	cin >> num;
	return num;
}

void tellstory(string name, string noun, int number, string bodypart, string verb)
{
	cout<<"Here is your story\n\n";
	cout<<" The great explorer ";
	cout<< name;
	cout<<" had almost given up hope of finding the lost city of\n ";
	cout<< noun<<"\n";
	cout<<"Then "<< noun <<" found him ";
	cout<<"Tear were streaming from his ";
	cout << bodypart;
	cout<<"\nFinaly after all this time his quest had been complete\n";
	cout<<"Then the ";
	cout<< noun;
	cout<<" promtly devored ";
	cout<< name;
	cout<<"\nThe moral of story is be carefull whet you ";
	cout<< verb;
	cout<<" for";


}