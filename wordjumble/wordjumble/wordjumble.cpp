// wordjumble

#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{
	enum fields{WORD,HINT,NUM_FIELDS};
	const int NUM_WORDS = 5;
	string WORDS [NUM_WORDS][NUM_FIELDS] =
	{
		{"Wall", "YOu might bang yoru head off this"},
		{"Glasses", " These might helo you see better"},
		{"Laboured","Tiresome isnt it"},
		{"Persistant","Keep at it"},
		{"Jumble","What this game is about"}
	};

	srand(static_cast<unsigned int>(time(0)));
	int choice =(rand() % NUM_WORDS);

	string theWord = WORDS[choice][WORD];
	string theHint = WORDS[choice][HINT];

	string jumble = theWord;
	int length = jumble.size();
	for(int i=0;i<length ;++i)
	{
		int index1 = (rand() % length);
		int index2 =(rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}

	cout<<"\t\tWelcome to word Jumble\n\n";
	cout<<"Unscamble the letters to make a wod\n";
	cout<<"Enter 'hint' for a hint\n";
	cout<<"Enter 'quit' to quit\n";
	cout<<"The Jumble is\t\t"<< jumble;

	string guess;
	cout<<"\nYour guess\n";
	cin >> guess;


	while((guess != theWord) && (guess != "quit"))
	{
		if(guess == "hint")
		{
			cout<< HINT;
		}
		else
		{
			cout<<"Sorry that was incorrect";
		}

		cout<<"Your guess\n\n";
		cin >> guess;
	}
	if(guess == theWord)
	{
		cout<<"Weldone you got it correct\n";
	}
	cout<<"Goodbye";

	return 0;

}